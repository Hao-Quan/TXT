#include <iostream>
#include <string.h>
//#include <stdio.h>

#include "Myxml.h"
#include "tinyxml2-master/tinyxml2.h"

using namespace std;
using namespace tinyxml2;

#ifndef XMLCheckResult
	#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult); return a_eResult; }
#endif



int main(){
	cout<< "sssHello";

	Cpdlc_message *cpdlc_message = NULL;

	/*	cpdlc_message attribute */
	std::string f_i = "AAL123";
	//cpdlc_message->cpdlc_msg_ATTR.flight_id = f_i.c_str();

	std::string direction = "up";
	cpdlc_message->cpdlc_msg_ATTR.direction = s::up;

	/* header */
//	std::string date = "2002/03/29";
//	std::string time = "10:59:33";
//	cpdlc_message->cpdlc_msg_ELE.header.date = date.c_str();
//	cpdlc_message->cpdlc_msg_ELE.header.time = time.c_str();

//	/* payload */
//	cpdlc_message->cpdlc_msg_ELE.msg_element.msg_element_ATTR.id = "19";
//	cpdlc_message->cpdlc_msg_ELE.msg_element.msg_element_ELE.level.level_ELE.leveldata1.leveldata_ATTR.units = "flightLevel";

//	typedef struct {
//	  char *att_flight_id ="AAL123";
//	  char *att_direction = "up";
//	} Header;
//
//	typedef struct MSG {
//		Header header;
//		struct Payload	payload;
//	} MSG;

	//struct Level_!ele {
	//	Leveldata	leveldata;
	//};
	//
	//struct Leveldata {
	//	char *#PCDATA;	// = 300
	//	Leveldata_!attr	leveldata_!attr;
	//};
	//
	//struct Leveldata_!attr {
	//	enum units {
	//		"feet", "metres", "flightLevel", "metricFlightLevel"
	//	};
	//
	//	enum role {
	//		"current", "waypoint"
	//	};
	//}


	return 0;
}


