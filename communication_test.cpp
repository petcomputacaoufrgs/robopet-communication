#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <map>
#include <string>

#include "rp_client.h"
#include "rp_server.h"

#define MAX_ROBOTS 5

int team_id;


void makeAIToGUI(RoboPET_WrapperPacket &packet) {

    AIToGUI *aitogui = packet.mutable_aitogui();
    AIToGUI::Point *b = aitogui->mutable_ball();
    b->set_x(1000);
    b->set_y(1000);

    AIToGUI::Robot *p1 = aitogui->add_blue_robots();
    p1->set_current_x(500);
    p1->set_current_y(500);
    p1->set_current_theta(30);
    p1->set_future_x(5000);
    p1->set_future_y(5000);
    p1->set_future_theta(30);
    p1->set_id(2);
    
    for(int i=1; i<13; i++) {
		AIToGUI::Point *p = p1->add_path();
		p->set_x(500+i*110);
		p->set_y(500+i*40);
	}

    AIToGUI::Robot *p2 = aitogui->add_yellow_robots();
    p2->set_current_x(100);
    p2->set_current_y(800);
    p2->set_current_theta(30);
    p2->set_future_x(5000);
    p2->set_future_y(500);
    p2->set_future_theta(0);
    p2->set_id(5);

    for(int i=1; i<3; i++) {
		AIToGUI::Point *p = p2->add_path();
		p->set_x(100+i*140);
		p->set_y(800-i*70);
	}

    AIToGUI::Robot *p4 = aitogui->add_yellow_robots();
    p4->set_current_x(6000);
    p4->set_current_y(2700);
    p4->set_current_theta(30);
    p4->set_future_x(6000);
    p4->set_future_y(2700);
    p4->set_future_theta(30);
    p4->set_id(3);
    
    for(int i=1; i<7; i++) {
		AIToGUI::Point *p = p4->add_path();
		p->set_x(6000-i*100);
		p->set_y(2700);
	}

}

void makeAIToRadio(RoboPET_WrapperPacket &packet) {

	AIToRadio *aitoradio = packet.mutable_aitoradio();

	for(int i=0; i < 5; i++) {
		AIToRadio::Robot *r = aitoradio->add_robots();
       	r->set_displacement_x(i*100);
		r->set_displacement_y(i*150);
		r->set_displacement_theta(i*10);
		r->set_drible(1);
		r->set_kick(0);
		r->set_chip_kick(0);
		r->set_id(i);
		r->set_current_theta(0);
	}
}


void makeAIToTracker(RoboPET_WrapperPacket &packet) {

	AIToTracker* aitotracker = packet.mutable_aitotracker();

	for(int i=0; i < 5; i++) {
		AIToTracker::Robot *r = aitotracker->add_robots();
       	r->set_displacement_x(i*100);
		r->set_displacement_y(i*150);
		r->set_displacement_theta(i*10);
		r->set_drible(1);
		r->set_kick(0);
		r->set_id(i);
	}
}

void makeGUIToAI(RoboPET_WrapperPacket &packet) {

	GUIToAI *guitoai = packet.mutable_guitoai();

	//guitoai->set_nada(1);
}

void makeJoyToRadio(RoboPET_WrapperPacket &packet) {
	
	JoyToRadio *joytoradio = packet.mutable_joytoradio();
	AIToRadio *aitoradio = joytoradio->mutable_aitoradio();

	for(int i=0; i < 5; i++) {
		AIToRadio::Robot *r = aitoradio->add_robots();
       	r->set_displacement_x(i*100);
		r->set_displacement_y(i*150);
		r->set_displacement_theta(i*10);
		r->set_drible(1);
		r->set_kick(0);
		r->set_chip_kick(0);
		r->set_id(i);
		r->set_current_theta(0);
	}
	
	joytoradio->set_force_0(0);
	joytoradio->set_force_1(0);
	joytoradio->set_force_2(0);
	joytoradio->set_secret_attack(0);
}

void makeRadioToSim(RoboPET_WrapperPacket &packet) {

	RadioToSim *radiotosim = packet.mutable_radiotosim();
	radiotosim->set_team_id(team_id);

	for(int i=0; i < 5; i++) {
		RadioToSim::Robot *r1 = radiotosim->add_robots();
       	r1->set_force_x((i+1)*100000 - (i+1)*100000*2);
		r1->set_force_y((i+1)*100000 - (i+1)*100000*2);
		r1->set_displacement_theta(i);
		r1->set_kick(0);
		r1->set_drible(1);
		r1->set_id(i);
	}
}


void makeRadioToTracker(RoboPET_WrapperPacket &packet) {

	RadioToTracker* radiototracker = packet.mutable_radiototracker();

	radiototracker->set_nada(1);
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
        r->set_id(i);

        r = simtotracker->add_yellow_robots();
        r->set_x(i*100);
        r->set_y(i*100);
        r->set_theta(i*10);
        r->set_id(i);
	}
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


void sslServer(int port=8100, char* hostname=(char*)"localhost")
{
	printf("Using port %i and host %s\n", port, hostname);
	RoboPETServer server(port, hostname);
	RoboPETServer aitogui(PORT_AI_TO_GUI, IP_AI_TO_GUI);
	RoboPETServer aitoradio(PORT_AI_TO_RADIO, IP_AI_TO_RADIO);
	RoboPETServer aitotracker(PORT_AI_TO_TRACKER, IP_AI_TO_TRACKER);
	RoboPETServer guitoai(PORT_GUI_TO_AI, IP_GUI_TO_AI);
	RoboPETServer joytoradio(PORT_JOY_TO_RADIO, IP_JOY_TO_RADIO);
	RoboPETServer radiotosim(PORT_RADIO_TO_SIM, IP_RADIO_TO_SIM);
	RoboPETServer radiototracker(PORT_RADIO_TO_TRACKER, IP_RADIO_TO_TRACKER);
	RoboPETServer simtotracker(PORT_SIM_TO_TRACKER, IP_SIM_TO_TRACKER);
	RoboPETServer trackertoai(PORT_TRACKER_TO_AI, IP_TRACKER_TO_AI);

	RoboPET_WrapperPacket packet;

    makeAIToGUI(packet);
    makeAIToRadio(packet);
    makeAIToTracker(packet);
    makeGUIToAI(packet);
    makeJoyToRadio(packet);
    makeRadioToSim(packet);
    makeRadioToTracker(packet);
    makeTrackerToAI(packet);
    makeSimToTracker(packet);

	/*
	 GUIToAI *guitoai = packet.mutable_guitoai();
	 guitoai->set_nada(5);
	 */

	printf("Press <Enter> to open connection with client...\n");
	getchar();

	server.open();
	aitogui.open();
	aitoradio.open();
	aitotracker.open();
	guitoai.open();
	joytoradio.open();
	radiotosim.open();
	radiototracker.open();
	simtotracker.open();
	trackertoai.open();

	while(true) {

			/*for (int i=0; ; ++i)
			{
				usleep(500);
				AIToGUI::Point *b = packet.mutable_aitogui()->mutable_ball();
				b->set_x(i%5000 + 100);
	 			b->set_y(i%5000 + 100);
	 			printf("%i\n",i%5000 + 100);
				//AIToGUI::Robot *p1 = packet.mutable_aitogui()->blue_robots(0);
				//p1->set_current_x(i%5000);
	 			//p1->set_current_y(i%5000);
	 			//p1->set_current_theta(i%360);
			}*/
			
			server.send(packet);
			simtotracker.send(packet);
			aitotracker.send(packet);
			radiototracker.send(packet);
			aitogui.send(packet);
			trackertoai.send(packet);			

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
			printf("||||||||||||||||||||||||||||\n");
			printf("TestClient Received\n");
			if (packet.has_aitogui())
			{
				printf("AI-To-GUI!\n");
			}
			if (packet.has_aitoradio())
			{
				printf("AI-To-Radio!\n");
			}
			if (packet.has_aitotracker())
			{
				printf("AI-To-Tracker!\n");
			}
			if (packet.has_guitoai())
			{
				printf("GUI-To-AI!\n");
			}
			if (packet.has_joytoradio())
			{
				printf("Joy-To-Radio!\n");
			}
			if (packet.has_radiotosim())
			{
				printf("Radio-To-Sim!\n");
			}
			if (packet.has_radiototracker())
			{
				printf("Radio-To-Tracker!\n");
			}
			if (packet.has_simtotracker())
			{
				printf("Sim-To-Tracker!\n");
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
		}
	}
}

int main(int argc, char **argv)
{
	char ch;
	int port = 8100;
	char *hostname = (char*) "localhost"; //insira aqui o IP da m�quina

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
		sslClient(port/*, hostname*/);
	}
}
