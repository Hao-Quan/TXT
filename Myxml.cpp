#include "stdafx.h"

#include <iostream>
#include <string>
#include "Myxml.h"

using namespace tinyxml2;

#ifndef XMLCheckResult
#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult);}
#endif

void down_struct_to_XML(Data_link datalink) {
	XMLDocument xmlDoc;

	//////////////////////////////////////////
	////		down 65: Due to weather    //
	//////////////////////////////////////////
	if (!datalink.msg_element_id.compare("65")) {
		string flight_id = datalink.value1;
		string date = datalink.value2;
		string time = datalink.value3;

		
		XMLElement *cpdlc_message_item = xmlDoc.NewElement("cpdlc-message");
		cpdlc_message_item->SetAttribute("flight-id", flight_id.c_str());
		cpdlc_message_item->SetAttribute("direction", "down");
		xmlDoc.InsertFirstChild(cpdlc_message_item);

		//Header 
		XMLElement *header_item = xmlDoc.NewElement("header"); 
		XMLElement *date_item = xmlDoc.NewElement("date");
		date_item->SetText(date.c_str());
		XMLElement *time_item = xmlDoc.NewElement("time");
		time_item->SetText(time.c_str());

		cpdlc_message_item->InsertEndChild(header_item);
		header_item->InsertEndChild(date_item);
		header_item->InsertEndChild(time_item);

		// msg-element
		XMLElement *msg_element_item = xmlDoc.NewElement("msg-element"); 
		msg_element_item->SetAttribute("id", flight_id.c_str());
		cpdlc_message_item->InsertEndChild(msg_element_item);
	
	}
		//if (msg_element_id.compare("65") == 0) {
		//
		//}
		//else {
			/*XMLElement *level_item = xmlDoc.NewElement("level"); 
	
			XMLElement *leveldata1_item = xmlDoc.NewElement("leveldata");
			leveldata1_item->SetAttribute("units", units.c_str());
			leveldata1_item->SetText(leveldata_value.c_str());

			cpdlc_message_item->InsertEndChild(msg_element_item);
			msg_element_item->InsertEndChild(level_item);
			level_item->InsertEndChild(leveldata1_item);*/
		//}

	
	

	

	// Save XML file to disk
	XMLError eResult = xmlDoc.SaveFile("Down65.xml");
	XMLCheckResult(eResult);


}

//void struct_to_XML(Cpdlc_message cpdlc_msg) {
//	
//	/*	<cpdlc-message> Attribute */
//	string cpdlc_msg_flight_id = cpdlc_msg.cpdlc_msg_ATTR.flight_id;
//	string cpdlc_msg_direction = "unknown";
//	int direction = cpdlc_msg.cpdlc_msg_ATTR.direction;
//	if (direction == 0) {
//		cpdlc_msg_direction = "down";
//	}
//	else {
//		cpdlc_msg_direction = "up";
//	}
//
//	/*	<cpdlc-message> header (format: ELE)*/
//	Header header = cpdlc_msg.header;
//	/*	<cpdlc-message> element */
//	string cpdlc_msg_header_date = header.date;
//	string cpdlc_msg_header_time = header.time;
//
//	/*	<msg-element>  (format: ATTR + ELE) */
//	Msg_element msg_element = cpdlc_msg.msg_element;
//	/*	<msg-element>  attribute */
//	string msg_element_id = msg_element.msg_element_ATTR.id;
//	/*	<msg-element> element: <level> (format: ELE)*/
//	Level msg_element_level = msg_element.level;
//	Level_ELE level_ele = msg_element_level.level_ELE;
//	/*	<leveldata>	(format: ATTR + ELE)*/
//	Leveldata leveldata1 = level_ele.leveldata1;
//	/* <leveldata> attribute */
//	Leveldata_ATTR leveldata_attr = leveldata1.leveldata_ATTR;
//	int u = leveldata_attr.units;
//	string units;
//	switch(u) {
//		case 0: {
//			units = "feet";
//			break;
//		}
//		case 1: {
//			units = "meters";
//			break;
//		}
//		case 2: {
//			units = "flightLevel";
//			break;
//		}
//		case 3: {
//			units = "metricFlightLevel";
//			break;
//		}
//	}
//
//	/* <leveldata> element */
//	string leveldata_value = leveldata1.PCDATA;
//
//
//	XMLDocument xmlDoc;
//	XMLElement *cpdlc_message_item = xmlDoc.NewElement("cpdlc-message");
//	cpdlc_message_item->SetAttribute("flight-id", cpdlc_msg_flight_id.c_str());
//	cpdlc_message_item->SetAttribute("direction", cpdlc_msg_direction.c_str());
//	xmlDoc.InsertFirstChild(cpdlc_message_item);
//
//	// Header 
//	XMLElement *header_item = xmlDoc.NewElement("header"); 
//	XMLElement *date_item = xmlDoc.NewElement("date");
//	date_item->SetText(cpdlc_msg_header_date.c_str());
//	XMLElement *time_item = xmlDoc.NewElement("time");
//	time_item->SetText(cpdlc_msg_header_time.c_str());
//
//	cpdlc_message_item->InsertEndChild(header_item);
//	header_item->InsertEndChild(date_item);
//	header_item->InsertEndChild(time_item);
//
//	// msg-element
//	XMLElement *msg_element_item = xmlDoc.NewElement("msg-element"); 
//	msg_element_item->SetAttribute("id", msg_element_id.c_str());
//	XMLElement *level_item = xmlDoc.NewElement("level"); 
//	
//	XMLElement *leveldata1_item = xmlDoc.NewElement("leveldata");
//	leveldata1_item->SetAttribute("units", units.c_str());
//	leveldata1_item->SetText(leveldata_value.c_str());
//
//	cpdlc_message_item->InsertEndChild(msg_element_item);
//	msg_element_item->InsertEndChild(level_item);
//	level_item->InsertEndChild(leveldata1_item);
//
//	XMLError eResult = xmlDoc.SaveFile("SavedData.xml");
//	XMLCheckResult(eResult);
//
//}



//Data_Link XML_to_struct(string xml_filename) {
//
//	Data_Link data_link;
//
//	XMLDocument xmlDoc;
//	XMLError eResult = xmlDoc.LoadFile(xml_filename.c_str());
//	XMLCheckResult(eResult);
//
//	XMLElement *pRoot = xmlDoc.RootElement();
//	if (pRoot == nullptr)
//		cout << "Null pointer: " << XML_ERROR_FILE_READ_ERROR;
//
//	const char *flight_id = nullptr;
//	flight_id = pRoot->Attribute("flight-id");
//	if (flight_id == nullptr) cout << XML_ERROR_PARSING_ATTRIBUTE;
//
//	const char *direction = nullptr;
//	direction = pRoot->Attribute("direction");
//	if (direction == nullptr) cout << XML_ERROR_PARSING_ATTRIBUTE;
//	
//	// Header 
//	
//	XMLElement *header = pRoot->FirstChildElement();
//	XMLElement *date = header->FirstChildElement();
//	
//	XMLElement *child_element;
//	for (XMLElement *i = pRoot->FirstChildElement(); i != NULL; i = i->NextSiblingElement()) {
//		const char *element_name = i->Name();		
//		if (!strcmp(element_name, "header")) {
//			XMLElement *date_element = i->FirstChildElement("date");
//			const char *date_text = date_element->GetText();
//			
//			XMLElement *time_element = i->FirstChildElement("time");
//			const char *time_text = time_element->GetText();
//			
//			data_link.date = date_text;
//			data_link.time = time_text;
//		}
//
//		if (!strcmp(element_name, "msg-element")) {
//			const char *msg_element_id = i->Attribute("id");
//			data_link.msg_element_id = msg_element_id;
//
//			child_element = i->FirstChildElement();
//			cout << child_element->Name();
//			if (!strcmp(child_element->Name(), "level")){
//				XMLElement *leveldata = child_element->FirstChildElement();
//				data_link.leveldata1_value = leveldata->GetText();
//				const char *units_value_char = leveldata->Attribute("units");
//				if (!strcmp(units_value_char, "feet"))
//					data_link.units = feet;
//				else if (!strcmp(units_value_char, "metres")) 
//					data_link.units = metres;	
//				
//				else if (!strcmp(units_value_char, "flightLevel"))
//					data_link.units = flightLevel;	
//				
//				else
//					data_link.units = metricFlightLevel;
//			}
//		}
//	  
//	}
//
//	return data_link;
//	
//}
//
//
