#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ssl_client.h"
#include "ssl_server.h"

#define MAX_ROBOTS 5

void sslServer(int port=8100, char* hostname="localhost")
{
	RoboCupSSLServer server(port, hostname);
	SSL_WrapperPacket packet;

	//TrackerToAI* p1 = packet.mutable_trackertoai();
	//BallTracker* a = p1->mutable_ball();
	//a->set_x(2);
	//a->set_y(2);


	 //*
	 AIToGUI *aitogui = packet.mutable_aitogui();
	 GUIBall *b = aitogui->mutable_ball();
	 b->set_x(1000);
	 b->set_y(1000);
	 b->set_past_x(1);
	 b->set_past_y(2);

	 GUIRobot *p1 = aitogui->add_blue_robots();
	 p1->set_current_x(500);
	 p1->set_current_y(500);
     p1->set_current_theta(30);
     p1->set_future_x(5000);
	 p1->set_future_y(5000);
	 p1->set_future_theta(30);
	 p1->set_past_x(500);
	 p1->set_past_y(500);

	 GUIRobot *p2 = aitogui->add_yellow_robots();
	 p2->set_current_x(500);
	 p2->set_current_y(500);
     p2->set_current_theta(30);
     p2->set_future_x(5000);
	 p2->set_future_y(500);
	 p2->set_future_theta(0);
	 p2->set_past_x(500);
	 p2->set_past_y(500);

	 GUIRobot *p3 = aitogui->add_blue_robots();
	 p3->set_current_x(1000);
	 p3->set_current_y(2700);
     p3->set_current_theta(30);
     p3->set_future_x(1000);
	 p3->set_future_y(2700);
	 p3->set_future_theta(30);
	 p3->set_past_x(500);
	 p3->set_past_y(500);

	 GUIRobot *p4 = aitogui->add_yellow_robots();
	 p4->set_current_x(6000);
	 p4->set_current_y(2700);
     p4->set_current_theta(30);
     p4->set_future_x(6000);
	 p4->set_future_y(2700);
	 p4->set_future_theta(30);
	 p4->set_past_x(500);
	 p4->set_past_y(500);
	 //*/

	/*
	 GUIToAI *guitoai = packet.mutable_guitoai();
	 guitoai->set_nada(5);
	 */

	printf("Press <Enter> to open connection with client...\n");
	getchar();
	server.open();
	while(true) {

			/*for (int i=0; ; ++i)
			{
				b->set_x(i%5000 + 100);
	 			b->set_y(i%5000 + 100);
				p1->set_current_x(i%5000);
	 			p1->set_current_y(i%5000);
	 			p1->set_current_theta(i%360);
				p2->set_current_x(i%5000);
				printf("Mandei: %d\n",p1->current_x());
				usleep(5000);
				server.send(packet);
			}*/
			server.send(packet);
	}
}

void sslClient(int port=8100, char* hostname="localhost")
{
	RoboCupSSLClient client(port, hostname);
	client.open(false);
	SSL_WrapperPacket packet;
	printf("TestClient Started! Waiting for data. \n");
	while(true) {
		//printf(".");
		if (client.receive(packet)) {
			printf("----------------------------\n");
			printf("TestClient Received ");
			if (packet.has_detection())
			{
				printf("DetectionFrame!\n");
			}
			if (packet.has_geometry())
			{
				printf("GeometryData!\n");
			}
			if (packet.has_aitogui())
			{
				printf("AI-To-GUI!\n");
			}
			if (packet.has_guitoai())
			{
				printf("GUI-To-AI!\n");
			}
			if (packet.has_trackertoai())
			{
				printf("Tracker-To-AI!\n");
				printf("Ball: <%d, %d>\n", packet.trackertoai().ball().x(),
				 									packet.trackertoai().ball().y());
				for(int i=0; i<packet.trackertoai().robots_blue_size(); i++)
					printf("Blue Robot[%d]: <%d, %d>\n", i,
											packet.trackertoai().robots_blue(i).x(),
											packet.trackertoai().robots_blue(i).y());
				for(int i=0; i<packet.trackertoai().robots_yellow_size(); i++)
					printf("Yellow Robot[%d]: <%d, %d>\n", i,
											packet.trackertoai().robots_yellow(i).x(),
											packet.trackertoai().robots_yellow(i).y());
			}
			if (packet.has_aitoradio())
			{
				printf("AI-To-Radio!\n");
			}
			if (packet.has_aitosim())
			{
				printf("AI-To-Sim!\n");
			}
			if (packet.has_aitotracker())
			{
				printf("AI-To-Tracker!\n");
			}
			if (packet.has_simtotracker())
			{
				printf("Sim-To-Tracker!\n");
			}
		}
	}
}

int main(int argc, char **argv)
{
	char ch;
	int port = 8100;
	char *hostname = (char*) "143.54.12.65";//"localhost";
	bool server = false;
	bool client = false;

	while((ch = getopt(argc, argv, "s:c:p:")) != EOF) {
		switch(ch) {
			case 's': server = true; hostname = optarg; break;
			case 'c': client = true; hostname = optarg; break;
			case 'p': port = atoi(optarg); break;
		}
	}

	if(!client && !server) client = true;
	else if(server && client) exit(1);

	if(server) {
		sslServer(port, hostname);
	} else {
		sslClient(port, hostname);
	}
}
