#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <map>
#include <string>

#include "rp_client.h"
#include "rp_server.h"

#define MAX_ROBOTS 5

void makeAIToGUI(RoboPET_WrapperPacket &packet)
{
    AIToGUI *aitogui = packet.mutable_aitogui();
    AIToGUI::Ball *b = aitogui->mutable_ball();
    b->set_x(1000);
    b->set_y(1000);
    b->set_past_x(1);
    b->set_past_y(2);

    AIToGUI::Robot *p1 = aitogui->add_blue_robots();
    p1->set_current_x(500);
    p1->set_current_y(500);
    p1->set_current_theta(30);
    p1->set_future_x(5000);
    p1->set_future_y(5000);
    p1->set_future_theta(30);
    p1->set_past_x(500);
    p1->set_past_y(500);

    AIToGUI::Robot *p2 = aitogui->add_yellow_robots();
    p2->set_current_x(500);
    p2->set_current_y(500);
    p2->set_current_theta(30);
    p2->set_future_x(5000);
    p2->set_future_y(500);
    p2->set_future_theta(0);
    p2->set_past_x(500);
    p2->set_past_y(500);

    AIToGUI::Robot *p3 = aitogui->add_blue_robots();
    p3->set_current_x(1000);
    p3->set_current_y(2700);
    p3->set_current_theta(30);
    p3->set_future_x(1000);
    p3->set_future_y(2700);
    p3->set_future_theta(30);
    p3->set_past_x(500);
    p3->set_past_y(500);

    AIToGUI::Robot *p4 = aitogui->add_yellow_robots();
    p4->set_current_x(6000);
    p4->set_current_y(2700);
    p4->set_current_theta(30);
    p4->set_future_x(6000);
    p4->set_future_y(2700);
    p4->set_future_theta(30);
    p4->set_past_x(500);
    p4->set_past_y(500);
    
}

void makeTrackerToAI(RoboPET_WrapperPacket &packet)
{
    TrackerToAI* trackertoai = packet.mutable_trackertoai();
    
    TrackerToAI::Ball *b = trackertoai->mutable_ball();
    b->set_x(1000);
    b->set_y(1000);

    for (int i=0; i < 5; ++i) {
        TrackerToAI::Robot *r = trackertoai->add_blue_robots();
        r->set_x(i*100);
        r->set_y(i*100);
        r->set_theta(i*10);
        r->set_id(i);
        
        r = trackertoai->add_yellow_robots();
        r->set_x(i*100);
        r->set_y(i*100);
        r->set_theta(i*10);
        r->set_id(i);
    }


}

void makeSimToTracker(RoboPET_WrapperPacket &packet) {
	SimToTracker* simtotracker = packet.mutable_simtotracker();
	
	SimToTracker::Ball *b = simtotracker->mutable_ball();
	b->set_x(1000);
	b->set_y(1000);
	
	for(int i=0; i < 5; i++) {
		SimToTracker::Robot *r = simtotracker->add_blue_robots();
        r->set_x(i*100);
        r->set_y(i*100);
        r->set_theta(i*10);
        
        r = simtotracker->add_yellow_robots();
        r->set_x(i*100);
        r->set_y(i*100);
        r->set_theta(i*10);
	}
}

void makeAIToTracker(RoboPET_WrapperPacket &packet) {
	AIToTracker* aitotracker = packet.mutable_aitotracker();
	
	aitotracker->set_nada(1);
}

void makeRadioToTracker(RoboPET_WrapperPacket &packet){
	RadioToTracker* radiototracker = packet.mutable_radiototracker();
	
	radiototracker->set_nada(1);
}

void sslServer(int port=8100, char* hostname=(char*)"localhost")
{
	printf("Using port %i and host %s\n", port, hostname);
	RoboPETServer server(port, hostname);
	RoboPETServer simtotracker(PORT_SIM_TO_TRACKER, "localhost");
	RoboPETServer aitotracker(PORT_AI_TO_TRACKER, "localhost");
	RoboPETServer radiototracker(PORT_RADIO_TO_TRACKER, "localhost");
	RoboPETServer aitogui(PORT_AI_TO_GUI, "localhost");
	RoboPET_WrapperPacket packet;

    makeAIToGUI(packet);
    makeTrackerToAI(packet);
    makeSimToTracker(packet);
    makeAIToTracker(packet);
    makeRadioToTracker(packet);

	/*
	 GUIToAI *guitoai = packet.mutable_guitoai();
	 guitoai->set_nada(5);
	 */

	printf("Press <Enter> to open connection with client...\n");
	getchar();

	server.open();
	simtotracker.open();
	aitotracker.open();
	radiototracker.open();
	aitogui.open();

	while(true) {

			/*for (int i=0; ; ++i)
			{
				AIToGUI::Ball *b = packet.mutable_aitogui()->mutable_ball();
				b->set_x(i%5000 + 100);
	 			b->set_y(i%5000 + 100);
				AIToGUI::Robot *p1 = packet.mutable_aitogui()->blue_robots(0);
				p1->set_current_x(i%5000);
	 			p1->set_current_y(i%5000);
	 			p1->set_current_theta(i%360);
				//p2->set_current_x(i%5000);
				usleep(5000);
				server.send(packet);
				simtotracker.send(packet);
				aitotracker.send(packet);
				radiototracker.send(packet);
				aitogui.send(packet);
			}*/
			server.send(packet);
			simtotracker.send(packet);
			aitotracker.send(packet);
			radiototracker.send(packet);
			aitogui.send(packet);
	}
}

void sslClient(int port=8100, char* hostname=(char*)"localhost")
{
	printf("Using port %i and host %s\n", port, hostname);
	RoboPETClient client(port, hostname);
	client.open(false);
	RoboPET_WrapperPacket packet;
	String str;
	printf("TestClient Started! Waiting for data. \n");
	while(true) {
		//printf(".");
		if (client.receive(packet)) {
			printf("----------------------------\n");
			printf("TestClient Received ");
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
				for(int i=0; i<packet.trackertoai().blue_robots_size(); i++)
					printf("Blue Robot[%d]: <%i, %i>\n", i,
											packet.trackertoai().blue_robots(i).x(),
											packet.trackertoai().blue_robots(i).y());
				for(int i=0; i<packet.trackertoai().yellow_robots_size(); i++)
					printf("Yellow Robot[%d]: <%i, %i>\n", i,
											packet.trackertoai().yellow_robots(i).x(),
											packet.trackertoai().yellow_robots(i).y());
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
			if (packet.has_radiototracker())
			{
				printf("Radio-To-Tracker!\n");
			}
		} else if(client.receive(str)) {
		    printf("Vision-To-Tracker!\n");
		    printf("<|%s|>\n", str.c_str());
		}
	}
}

int main(int argc, char **argv)
{
	char ch;
	int port = 8100;
	char *hostname = (char*) "143.54.12.150"; //insira aqui o IP da máquina

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
		sslServer(port);
	} else {
		sslClient(port, hostname);
	}
}
