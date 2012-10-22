#ifndef ninjablock_h
#define ninjablock_h

#include <SPI.h>
#include <Ethernet.h>

class NinjaBlockClass {
	
public:
	char *host;
	char *nodeID;
	char *token;
	char *guid;
	int port;
	int vendorID;
	int deviceID;

	/*
	void setNodeID(char *nodeID);
	void setToken(char *token);
	void setGUID(char *guid);
	void setVendorID(uint16_t vendorID);
	void setDeviceID(uint16_t deviceID);
	*/
	
	//void setParams(char *nodeID, char *token, char *guid, uint16_t vendorID, uint16_t deviceID);
	int begin();
	void send(int data);
	void send(char *data);
};

extern NinjaBlockClass NinjaBlock; 

#endif