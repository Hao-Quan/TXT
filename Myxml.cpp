#include "stdafx.h"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

#include "Myxml.h"

using namespace tinyxml2;

#ifndef XMLCheckResult
#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult);}
#endif

void down_struct_to_XML(Data_link datalink) {
	XMLDocument xmlDoc;

	/*****************************************
	*		down 65: Due to weather			 *
	*****************************************/

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
		msg_element_item->SetAttribute("id", datalink.msg_element_id.c_str());
		cpdlc_message_item->InsertEndChild(msg_element_item);
	
	}
	

	// Save XML file to disk
	string filename = "Down" + datalink.msg_element_id + ".xml";
	XMLError eResult = xmlDoc.SaveFile(filename.c_str());
	XMLCheckResult(eResult);
	/*cout << "*** Down_struct_to_XML: Down" + datalink.msg_element_id + ".xml";
	cout << "\n" + filename + " is written in the disk successfully.\n";*/


}


Data_link	up_XML_to_struct(string xml_filename) {
	Data_link data_link;

	//data_link = {"empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty","empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty"};
	// Initialization the fileds of struct as "empty"
	data_link.param1 = "empty";
	data_link.param2 = "empty";
	data_link.param3 = "empty";
	data_link.param4 = "empty";
	data_link.param5 = "empty";
	data_link.param6 = "empty";
	data_link.param7 = "empty";
	data_link.param8 = "empty";
	data_link.param9 = "empty";

	data_link.value1 = "empty";
	data_link.value2 = "empty";
	data_link.value3 = "empty";
	data_link.value4 = "empty";
	data_link.value5 = "empty";
	data_link.value6 = "empty";
	data_link.value7 = "empty";
	data_link.value8 = "empty";
	data_link.value9 = "empty";

	int count = 1;
	const char *msg_element_id;
	XMLDocument xmlDoc;
	XMLError eResult = xmlDoc.LoadFile(xml_filename.c_str());
	XMLCheckResult(eResult);
	
	//// Print the XML file as string
	//XMLPrinter printer;
	//xmlDoc.Accept(&printer);
	//cout << printer.CStr();

	XMLElement *pRoot = xmlDoc.RootElement();
//	if (pRoot == nullptr)
//		cout << "Null pointer: " << XML_ERROR_FILE_READ_ERROR;

	const char *flight_id;
	flight_id = pRoot->Attribute("flight-id");
//	if (flight_id == nullptr) cout << XML_ERROR_PARSING_ATTRIBUTE;
	data_link.param1 = "flight_id";
	data_link.value1 = flight_id;
	count++;		//2

	const char *direction;
	direction = pRoot->Attribute("direction");
//	if (direction == nullptr) cout << XML_ERROR_PARSING_ATTRIBUTE;
	data_link.param2 = "direction";
	data_link.value2 = "up";
	count++;

	// Header

	for (XMLElement *i = pRoot->FirstChildElement(); i != NULL; i = i->NextSiblingElement()) {
		const char *element_name = i->Name();
		if (!strcmp(element_name, "header")) {
			XMLElement *date_element = i->FirstChildElement("date");
			const char *date_text = date_element->GetText();
			data_link.param3 = "date";
			data_link.value3 = date_text;
			count++;

			XMLElement *time_element = i->FirstChildElement("time");
			const char *time_text = time_element->GetText();
			data_link.param4 = "time";
			data_link.value4 = time_text;
			count++;
		}

		if (!strcmp(element_name, "msg-element")) {
			msg_element_id = i->Attribute("id");
			data_link.msg_element_id = msg_element_id;

			for (XMLElement *item = i->FirstChildElement(); item != NULL; item = item->NextSiblingElement()) {
				const char *element_name_sub = item->Name();
				if (!strcmp(element_name_sub, "position")) {
					const char *position_direction = NULL;
					const char *position_role = NULL;
					if (item->Attribute("direction"))
						position_direction = item->Attribute("direction");
					if (item->Attribute("role"))
						position_role = item->Attribute("role");

					XMLElement *fix_element = NULL;
					XMLElement *navaid_element = NULL;					
					XMLElement *latLong_element = NULL;
					XMLElement *latitude_element = NULL;
					const char *name;
					if (item->FirstChildElement("fix")){
						fix_element = item->FirstChildElement("fix");
						name = fix_element->Attribute("name");
						
						latLong_element = fix_element->FirstChildElement("latLong");
						latitude = latLong_element->FirstChildElement("latitude");
					}
					else {
						// It has element "navaid"
						navaid_element = item->FirstChildElement("navaid");
						name = navaid_element->Attribute("name");
					}
					

					/*const char *airport_value = airport_element->GetText();
					data_link.param5 = airport_element->Name();
					data_link.value5 = airport_value;
					count++;

					const char *role_value = airport_element->Attribute("role");
					data_link.param6 = "role";
					data_link.value6 = role_value;
					count++;*/
					}
				}

	/*			if (!strcmp(element_name_sub, "level")) {
					XMLElement *leveldata_element = item->FirstChildElement("leveldata");
					const char *leveldata_value = leveldata_element->GetText();
					const char *units_value = leveldata_element->Attribute("units");

					if (count == 7) {
						data_link.param7 = "level";
						data_link.value7 = "null";
						count++;
						data_link.param8 = leveldata_element->Name();
						data_link.value8 = leveldata_value;
						count++;
						data_link.param9 = "units";
						data_link.value9 = units_value;
						count++;
					}
					else {
						data_link.param5 = "level";
						data_link.value5 = "null";
						count++;
						data_link.param6 = leveldata_element->Name();
						data_link.value6 = leveldata_value;
						count++;
						data_link.param7 = "units";
						data_link.value7 = units_value;
						count++;

					}
				}

			}*/
			

		}

	}

	/*cout << "\n\n*** Up_XML_to_struct: data_link_up";
	cout <<  msg_element_id;
	cout << " structure is written successfully.\n\n";*/


	return  data_link;
}

vector<string>	down_XML_to_bytes(string xml_filename) {
	XMLDocument xmlDoc;
	XMLError eResult = xmlDoc.LoadFile(xml_filename.c_str());
	XMLCheckResult(eResult);

	// Read the XML file as string and stored in "char *text"
	XMLPrinter printer;
	xmlDoc.Accept(&printer);
	const char *text = printer.CStr();
	int len = strlen(text);
	std::ostringstream stm;
	string str_temp;
	const char *cstr = nullptr;
	vector<string> databyte_output;
	databyte_output.reserve(len);

	// Convert every char to HEX bytes and store it in vector
	for (int i = 0; i < len; i++) {
		stm << uppercase << std::hex << (int)text[i];
		str_temp = stm.str();
		databyte_output.push_back(str_temp);
		//cout << str_temp << endl;
		// clear the buffer of the stream
		stm.clear();
		stm.str("");
	}
	//cout << "\n*** " + xml_filename + " has been transformed into 'vector<string>' data bytes successfully.\n";
	return databyte_output;
}

void	up_bytes_to_XML(vector<string> vector_databytes, string xml_filename) {
	/* Example of initialization one vector */
	/*static const string arr[] = {"1A", "3C", "6B", "3A"};
	vector<string> m (arr, arr + sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < m.size(); i++)
		cout << m[i];*/
	
	stringstream ss;
	int x;
	char to_write;
	ofstream myfile (xml_filename);

	int len = vector_databytes.size();
	for (int i = 0; i < len; i++) {
		ss << hex << vector_databytes[i];
		ss >> x;
		to_write = static_cast<char> (x);
		if (myfile.is_open()) {
			myfile << to_write;
		}
		ss.clear();
	}
	
	myfile.close();	
	//cout << "\n*** Convert from data bytes into " + xml_filename + " successfully " << endl;
}

Data_link	up_bytes_to_struct(vector<string> vector_databytes, string xml_filename) {
	up_bytes_to_XML(vector_databytes, xml_filename);
	Data_link data_link = up_XML_to_struct(xml_filename);

	cout << "\n*** The HEX Bytes Array has transformed into " << xml_filename << " and  Structure successfully." << endl;
	return data_link;
}

vector<string> down_struct_to_bytes(Data_link datalink, string xml_filename) {
	down_struct_to_XML(datalink);
	vector<string> vector_bytes = down_XML_to_bytes(xml_filename);

	cout << "\n*** The Structure has transformed into " << xml_filename << " and HEX Bytes Array successfully." << endl;
	return vector_bytes;
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
