#include "stdafx.h"

#include <iostream>
#include <string>
#include "Myxml.h"

using namespace tinyxml2;

#ifndef XMLCheckResult
#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult);}
#endif

void down_to_XML(Cpdlc_message cpdlc_msg) {
	
	/*	<cpdlc-message> Attribute */
	string cpdlc_msg_flight_id = cpdlc_msg.cpdlc_msg_ATTR.flight_id;
	string cpdlc_msg_direction = "unknown";
	int direction = cpdlc_msg.cpdlc_msg_ATTR.direction;
	if (direction == 0) {
		cpdlc_msg_direction = "down";
	}
	else {
		cpdlc_msg_direction = "up";
	}

	/*	<cpdlc-message> header (format: ELE)*/
	Header header = cpdlc_msg.header;
	/*	<cpdlc-message> element */
	string cpdlc_msg_header_date = header.date;
	string cpdlc_msg_header_time = header.time;

	/*	<msg-element>  (format: ATTR + ELE) */
	Msg_element msg_element = cpdlc_msg.msg_element;
	/*	<msg-element>  attribute */
	string msg_element_id = msg_element.msg_element_ATTR.id;
	/*	<msg-element> element: <level> (format: ELE)*/
	Level msg_element_level = msg_element.level;
	Level_ELE level_ele = msg_element_level.level_ELE;
	/*	<leveldata>	(format: ATTR + ELE)*/
	Leveldata leveldata1 = level_ele.leveldata1;
	/* <leveldata> attribute */
	Leveldata_ATTR leveldata_attr = leveldata1.leveldata_ATTR;
	int u = leveldata_attr.units;
	string units;
	switch(u) {
		case 0: {
			units = "feet";
			break;
		}
		case 1: {
			units = "meters";
			break;
		}
		case 2: {
			units = "flightLevel";
			break;
		}
		case 3: {
			units = "metricFlightLevel";
			break;
		}
	}

	/* <leveldata> element */
	string leveldata_value = leveldata1.PCDATA;


	XMLDocument xmlDoc;
	XMLElement *cpdlc_message_item = xmlDoc.NewElement("cpdlc-message");
	cpdlc_message_item->SetAttribute("flight-id", cpdlc_msg_flight_id.c_str());
	cpdlc_message_item->SetAttribute("direction", cpdlc_msg_direction.c_str());
	xmlDoc.InsertFirstChild(cpdlc_message_item);

	// Header 
	XMLElement *header_item = xmlDoc.NewElement("header"); 
	XMLElement *date_item = xmlDoc.NewElement("date");
	date_item->SetText(cpdlc_msg_header_date.c_str());
	XMLElement *time_item = xmlDoc.NewElement("time");
	time_item->SetText(cpdlc_msg_header_time.c_str());

	cpdlc_message_item->InsertEndChild(header_item);
	header_item->InsertEndChild(date_item);
	header_item->InsertEndChild(time_item);

	// msg-element
	XMLElement *msg_element_item = xmlDoc.NewElement("msg-element"); 
	msg_element_item->SetAttribute("id", msg_element_id.c_str());
	XMLElement *level_item = xmlDoc.NewElement("level"); 
	
	XMLElement *leveldata1_item = xmlDoc.NewElement("leveldata");
	leveldata1_item->SetAttribute("units", units.c_str());
	leveldata1_item->SetText(leveldata_value.c_str());

	cpdlc_message_item->InsertEndChild(msg_element_item);
	msg_element_item->InsertEndChild(level_item);
	level_item->InsertEndChild(leveldata1_item);

	XMLError eResult = xmlDoc.SaveFile("SavedData.xml");
	XMLCheckResult(eResult);

}


