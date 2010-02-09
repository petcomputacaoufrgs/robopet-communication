#ifndef ROBOCUP_SSL_SERVER_H
#define ROBOCUP_SSL_SERVER_H

enum {
	PORT_AI_TO_GUI = 8100,
	PORT_AI_TO_RADIO,
	PORT_AI_TO_SIM,
	PORT_GUI_TO_AI,
	PORT_SIM_TO_TRACKER,
	PORT_TRACKER_TO_AI,
	PORT_AI_TO_TRACKER,
	PORT_RADIO_TO_TRACKER
};

#define IP_AI_TO_GUI "localhost"
#define IP_AI_TO_RADIO "localhost"
#define IP_AI_TO_SIM "localhost"
#define IP_GUI_TO_AI "localhost"
#define IP_SIM_TO_TRACKER "localhost"
#define IP_TRACKER_TO_AI "localhost"
#define IP_AI_TO_TRACKER "localhost"
#define IP_RADIO_TO_TRACKER "localhost"

enum {
	TEAM_BLUE,
	TEAM_YELLOW,
	TEAM_TOTAL
};

// console graphics
int gotoxy(int x, int y);
void rewindscr(void);
void clrscr(void);

//debugs
#define debug_int(x) printf(#x ": %i\n", x)

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
  \file    robocup_ssl_server.h
  \brief   C++ Interface: robocup_ssl_server
  \author  Stefan Zickler, 2009
*/
//========================================================================
#include "udp_netraw.h"
#include <string>
//#include <QMutex>
#include <pthread.h>

#include "messages_robocup_ssl_wrapper.pb.h"

using namespace std;

/**
	@author Stefan Zickler
*/
class RoboCupSSLServer{
protected:
  Net::UDP mc; // multicast server
  pthread_mutex_t mutex;
  int _port;
  string _net_address;
  string _net_interface;

public:
    RoboCupSSLServer(int port = 10002,
                     string net_ref_address="127.0.0.1",
                     string net_ref_interface="");

    ~RoboCupSSLServer();
    bool open();
    void close();
    bool send(const SSL_WrapperPacket & packet);
    bool send(const SSL_DetectionFrame & frame);
    bool send(const SSL_GeometryData & geometry);
    bool send(const TrackerToAI & trackerToAi);

};

#endif
