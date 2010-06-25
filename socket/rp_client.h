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
  \file    robocup_ssl_client.h
  \brief   C++ Interface: robocup_ssl_client
  \author  Stefan Zickler, 2009
*/
//========================================================================
#ifndef ROBOPET_CLIENT_H
#define ROBOPET_CLIENT_H
#include "udp_netraw.h"
#include <string>
//#include <QMutex>
#include <pthread.h>

#include "messages_robopet_wrapper.pb.h"

typedef std::string String;

using namespace std;
/**
	@author Author Name
*/

class RoboPETClient{
protected:
  static const int MaxDataGramSize = 65536;
  char * in_buffer;
  Net::UDP mc; // multicast client
  pthread_mutex_t mutex; // nao usa pra nada na implementacao, nao sei pq tem --jurkovski
  int _port;
  string _net_address;
  string _net_interface;
public:
    RoboPETClient(int port = 10002,
                     string net_ref_address="127.0.0.1",
                     string net_ref_interface="");

    ~RoboPETClient();
    bool open(bool blocking=false);
    void close();
    bool receive(RoboPET_WrapperPacket & packet);
    bool receive(String & packet);

};

#endif
