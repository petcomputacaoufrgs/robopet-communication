//========================================================================
//  This software is free: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License Version 3,
//  as published by the Free Software Foundation.
//
//  This software is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  Version 3 in the file COPYING that came with this distribution.
//  If not, see <http://www.gnu.org/licenses/>.
//========================================================================
/*!
  \file    robocup_ssl_server.cpp
  \brief   C++ Implementation: robocup_ssl_server
  \author  Stefan Zickler, 2009
*/
//========================================================================
#include "rp_server.h"

void rewindscr(void) {
	gotoxy(0, 0);
}

void clrscr(void) {
	for (int i = 0; i < 100; i++)
		putchar('\n');
	rewindscr();
}

int gotoxy(int x, int y) {
	char essq[100]; // String variable to hold the escape sequence
	char xstr[100]; // Strings to hold the x and y coordinates
	char ystr[100]; // Escape sequences must be built with characters

	/*
	** Convert the screen coordinates to strings
	*/

	sprintf(xstr, "%d", x);
	sprintf(ystr, "%d", y);

	/*
	** Build the escape sequence (vertical move)
	*/

	essq[0] = '\0';
	strcat(essq, "\033[");
	strcat(essq, ystr);

	/*
	** Described in man terminfo as vpa=\E[%p1%dd
	** Vertical position absolute
	*/

	strcat(essq, "d");

	/*
	** Horizontal move
	** Horizontal position absolute
	*/

	strcat(essq, "\033[");
	strcat(essq, xstr);

	// Described in man terminfo as hpa=\E[%p1%dG
	strcat(essq, "G");

	/*
	** Execute the escape sequence
	** This will move the cursor to x, y
	*/

	printf("%s", essq);
	return 0;
}

RoboPETServer::RoboPETServer(int port,
                     string net_address,
                     string net_interface)
{
  _port=port;
  _net_address=net_address;
  _net_interface=net_interface;
  pthread_mutex_init(&mutex, NULL);
}


RoboPETServer::~RoboPETServer()
{
}

void RoboPETServer::close() {
  mc.close();
}

bool RoboPETServer::open() {
  close();

  //if(!mc.open(_port,true,true)) { //original
  if(!mc.open(_port,false,false)) { //modificado
    fprintf(stderr,"Unable to open UDP network port: %d\n",_port);
    fflush(stderr);
    return(false);
  }

  Net::Address multiaddr,interface;
  multiaddr.setHost(_net_address.c_str(),_port);
  if(_net_interface.length() > 0){
    interface.setHost(_net_interface.c_str(),_port);
  }else{
    interface.setAny();
  }

  /* caso tenha multicast descomentar esse bloco e a linha "//original" comentada
  if(!mc.addMulticast(multiaddr,interface)) {
    fprintf(stderr,"Unable to setup UDP multicast\n");
    fflush(stderr);
    return(false);
  }
  */

  return(true);
}

bool RoboPETServer::send(const RoboPET_WrapperPacket & packet) {

  string buffer;
  packet.SerializeToString(&buffer);
  Net::Address multiaddr;
  multiaddr.setHost(_net_address.c_str(),_port);
  bool result;
  pthread_mutex_lock(&mutex);
  result=mc.send(buffer.c_str(),buffer.length(),multiaddr);
  pthread_mutex_unlock(&mutex);
  if (result==false) {
    fprintf(stderr,"Sending UDP datagram failed (maybe too large?). Size was: %zu byte(s)\n",buffer.length());
  }
  return(result);
}

bool RoboPETServer::send(const TrackerToAI & trackerToAi) {
	RoboPET_WrapperPacket pkt;
	TrackerToAI * tdata = pkt.mutable_trackertoai();
	tdata->CopyFrom(trackerToAi);
	return send(pkt);
}

