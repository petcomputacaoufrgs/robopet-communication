### VARIABLES ###
CC = g++
CFLAGS = -Wall -O2
LFLAGS = -lprotobuf
PACKETS_PATH = packets
SOCKET_PATH = socket
PROTO_PATH = proto
INC_PATHS = -I$(PACKETS_PATH) -I$(SOCKET_PATH)

PROTOBUF_FILES_H = message_gui_to_ai.pb.h \
				message_ai_to_gui.pb.h \
				message_ai_to_radio.pb.h \
				messages_robocup_ssl_detection.pb.h \
				messages_robocup_ssl_geometry.pb.h \
				messages_robocup_ssl_refbox_log.pb.h \
				messages_robocup_ssl_wrapper.pb.h \
				message_tracker_to_ai.pb.h \
				message_sim_to_tracker.pb.h \
				message_ai_to_sim.pb.h

PROTOBUF_FILES_O = $(PROTOBUF_FILES_H:.h=.o)
PROTOBUF_FILES_CC = $(PROTOBUF_FILES_H:.h=.cc)

all: ssl_server.o ssl_client.o communication_test udpsock_test

### CLIENT & SERVER ###
communication_test: communication_test.cpp ssl_server.o ssl_client.o udp_netraw.o $(PROTOBUF_FILES_O)
	$(CC) $(INC_PATHS) -o $@ $^ $(CFLAGS) $(LFLAGS)

udpsock_test: udpsock_test.cpp udp_netraw.o
	$(CC) $(INC_PATHS) -o $@ $^ $(CFLAGS) $(LFLAGS)

udp_netraw.o: $(SOCKET_PATH)/udp_netraw.cpp $(SOCKET_PATH)/udp_netraw.h
	$(CC) $(INC_PATHS) -c -o $@ $< $(CFLAGS) $(LFLAGS)

ssl_server.o: $(SOCKET_PATH)/ssl_server.cpp $(SOCKET_PATH)/ssl_server.h
	$(CC) $(INC_PATHS) -c -o $@ $< $(CFLAGS) $(LFLAGS)

ssl_client.o: $(SOCKET_PATH)/ssl_client.cpp $(SOCKET_PATH)/ssl_client.h
	$(CC) $(INC_PATHS) -c -o $@ $< $(CFLAGS) $(LFLAGS)

### PROTOBUF ###
%.pb.o: $(PACKETS_PATH)/%.pb.cc $(PACKETS_PATH)/%.pb.h $(PROTO_PATH)/%.proto
	protoc -I=$(PROTO_PATH) --cpp_out=$(PACKETS_PATH) $(PROTO_PATH)/$*.proto
	$(CC) $(INC_PATHS) -c $< $(CFLAGS) $(LFLAGS)
