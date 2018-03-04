#include "stdafx.h"

#include <iostream>
#include <string>

#include "Myxml.h"
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

#ifndef XMLCheckResult
	#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult); return a_eResult; }
#endif


int main(){

	struct Data_Link_down {
		string flight_id;
		Direction direction;
		string date;
		string time;
		string msg_element_id;
		Units units;
		string leveldata1_value;
	};

	struct Data_Link_down u19 = { "AAL123", up, "2002/03/29", "10:59:33", "19", flightLevel, "300"};

	///*	cpdlc_message attribute */
	Cpdlc_message cpdlc_message;
	cpdlc_message.cpdlc_msg_ATTR.flight_id = u19.flight_id;
	cpdlc_message.cpdlc_msg_ATTR.direction = u19.direction;

	/* header */
	string date = u19.date;
	string time = u19.time;
	cpdlc_message.header.date = u19.date.c_str();
	cpdlc_message.header.time = u19.time.c_str();

	cpdlc_message.msg_element.msg_element_ATTR.id = u19.msg_element_id;
	
	Units units = flightLevel;
	cpdlc_message.msg_element.level.level_ELE.leveldata1.leveldata_ATTR.units = u19.units;
	cpdlc_message.msg_element.level.level_ELE.leveldata1.PCDATA = u19.leveldata1_value;

	down_to_XML(cpdlc_message);

	cout<< "Finised\n";
	system("pause");
	return 0;
}