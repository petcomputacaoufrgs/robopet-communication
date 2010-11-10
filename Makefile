### VARIABLES ###
CC = g++
CFLAGS = -Wall -O2
LFLAGS = -lprotobuf
PACKETS_PATH = packets
SOCKET_PATH = socket
PROTO_PATH = proto
INC_PATHS = -I$(PACKETS_PATH) -I$(SOCKET_PATH)

OBJECTS = rp_server.o rp_client.o udp_netraw.o

PROTOBUF_FILES_H = message_gui_to_ai.pb.h \
				message_ai_to_gui.pb.h \
				message_ai_to_radio.pb.h \
				message_tracker_to_ai.pb.h \
				message_sim_to_tracker.pb.h \
				message_radio_to_sim.pb.h \
				message_ai_to_tracker.pb.h \
				message_radio_to_tracker.pb.h \
				message_joy_to_radio.pb.h \
				messages_robopet_wrapper.pb.h

PROTOBUF_FILES_O = $(PROTOBUF_FILES_H:.h=.o)
PROTOBUF_FILES_CC = $(PROTOBUF_FILES_H:.h=.cc)

.PHONY : all clean

all:  $(PROTOBUF_FILES_O) $(OBJECTS) communication.a communication_test udpsock_test

clean:
	rm communication.a
	rm *.o
	rm packets/*

### CLIENT & SERVER ###
communication_test: communication_test.cpp $(OBJECTS) $(PROTOBUF_FILES_O)
	$(CC) $(INC_PATHS) -o $@ $^ $(CFLAGS) $(LFLAGS) `pkg-config --cflags --libs protobuf`

udpsock_test: udpsock_test.cpp udp_netraw.o
	$(CC) $(INC_PATHS) -o $@ $^ $(CFLAGS) $(LFLAGS) `pkg-config --cflags --libs protobuf`

udp_netraw.o: $(SOCKET_PATH)/udp_netraw.cpp $(SOCKET_PATH)/udp_netraw.h
	$(CC) $(INC_PATHS) -c -o $@ $< $(CFLAGS) $(LFLAGS)

rp_server.o: $(SOCKET_PATH)/rp_server.cpp $(SOCKET_PATH)/rp_server.h
	$(CC) $(INC_PATHS) -c -o $@ $< $(CFLAGS) $(LFLAGS)

rp_client.o: $(SOCKET_PATH)/rp_client.cpp $(SOCKET_PATH)/rp_client.h
	$(CC) $(INC_PATHS) -c -o $@ $< $(CFLAGS) $(LFLAGS)

communication.a:
	ar rsv communication.a $(OBJECTS) $(PROTOBUF_FILES_O)

### PROTOBUF ###
%.pb.o: $(PROTO_PATH)/%.proto
	protoc -I=$(PROTO_PATH) --cpp_out=$(PACKETS_PATH) $(PROTO_PATH)/$*.proto
	$(CC) $(INC_PATHS) -c $(PACKETS_PATH)/$*.pb.cc $(CFLAGS) $(LFLAGS)
