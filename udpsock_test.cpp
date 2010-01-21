#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "udp_netraw.h"

static const int Size = 32;

const char *hostname = "localhost";
int port = 2000;

void EchoServer()
{
  Net::UDP net;
  Net::Address addr;

  char msg[Size+1];
  net.open(port);

  while(true){
	 printf("> %s",msg);
    if(net.wait(10)){
      int l = net.recv(msg,Size,addr);
      if(l > 0){
        msg[l] = 0;

        printf("["); addr.print();
        printf("]: %s",msg);
        if(msg[l-1] != '\n') printf("\n");

        net.send(msg,l,addr);
      }
    }
  }

  net.close();
}

void EchoClient()
{
  Net::UDP net;
  Net::Address addr,raddr;
  char msg[Size+1];
  int l;

  addr.setHost(hostname,port);
  net.open();

  while(fgets(msg,Size,stdin)){
    l = strlen(msg);
    net.send(msg,l,addr);

    net.wait(1000);
    l = net.recv(msg,Size,raddr);

    msg[l] = 0;
    printf("reply: %s",msg);
  }
}

int main(int argc, char **argv)
{
  char ch;
  bool server = false;
  bool client = false;

  while((ch = getopt(argc, argv, "sc:p:")) != EOF){
    switch(ch){
      case 's': server = true; break;
      case 'c': client = true; hostname = optarg; break;
      case 'p': port = atoi(optarg); break;
    }
  }

  if(server == client) exit(1);

  if(server){
    EchoServer();
  }else{
    EchoClient();
  }
}
