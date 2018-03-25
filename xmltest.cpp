#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

#include "Myxml.h"
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

#ifndef XMLCheckResult
	#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult); return a_eResult; }
#endif


int main(){

	//Data_link down65_data_link;
	//down65_data_link.msg_element_id = "65";
	//down65_data_link.param1 = "flight_id";
	//down65_data_link.param2 = "date";
	//down65_data_link.param3 = "time";

	//down65_data_link.value1 = "AAL123";
	//down65_data_link.value2 = "2002/03/29";
	//down65_data_link.value3 = "10:59:33";

	/**************************************************
	*		DOWN: STRUCTURE to Byte Data				*
	*													*
	*	Input: Structure with message down65			*
	*	Output: HEX DataBytes "Due to weather"			*
	*													*
	*   Release Date: 11-03-2018						*
	*****************************************************/

	//vector<string> databytes_down65 = down_struct_to_bytes(down65_data_link, "Down65.xml");

	/**************************************************** 
	*		UP: byte data to  structure					*
	*													*
	*	Input: hex databytes "due to weather"			*
	*	Output: structure with message "upxx.xml"		*
	*													*
	*   Release Date: 11-03-2018						*
	****************************************************/

	//Data_link dl = up_bytes_to_struct(databytes_down65, "Upxx.xml");


	/****************************************************************************
	*		UP: Byte Data to  STRUCTURE	for all possibile						*
	*					msg up46, up47, up48									*
	*																			*
	*	Input: HEX DataBytes "up46, up47, up48"									*
	*	Output: Structure with message "Up46.xml" "Up47.xml", "Up48.xml"		*
	*																			*
	*	Release Date: 18-03-2018												*
	*****************************************************************************/


	//vector<string> bytes_up46 = down_XML_to_bytes("Up46_airport.xml");
	//Data_link dlup46 = up_bytes_to_struct(bytes_up46, "Up46_airport.xml");

	/*vector<string> bytes_up47 = down_XML_to_bytes("Up47.xml");
	Data_link dlup47 = up_bytes_to_struct(bytes_up47, "Up47.xml");

	vector<string> bytes_up48 = down_XML_to_bytes("Up48_latLong.xml");
	Data_link dlup48 = up_bytes_to_struct(bytes_up48, "Up48_latLong.xml");*/

	/****************************************************************************
	*		UP: Byte Data to  STRUCTURE											*
	*		Msg up0 - up84														*
	*																			*
	*	Input: HEX DataBytes "up"	(file stored in directory "msg_original")	*
	*	Output: Structure (file stored in the directory "msg_generated")		*
	*																			*
	*	Release Date: 25-03-2018												*
	*****************************************************************************/
	vector<string> bytes_up0 = down_XML_to_bytes("Up0.xml");
	Data_link dlup0 = up_bytes_to_struct(bytes_up0, "Up0.xml");

	vector<string> bytes_up1 = down_XML_to_bytes("Up1.xml");
	Data_link dlup1 = up_bytes_to_struct(bytes_up1, "Up1.xml");

	vector<string> bytes_up2 = down_XML_to_bytes("Up2.xml");
	Data_link dlup2 = up_bytes_to_struct(bytes_up2, "Up2.xml");

	vector<string> bytes_up51 = down_XML_to_bytes("Up51.xml");
	Data_link dlup51 = up_bytes_to_struct(bytes_up51, "Up51.xml");

	vector<string> bytes_up52 = down_XML_to_bytes("Up52.xml");
	Data_link dlup52 = up_bytes_to_struct(bytes_up52, "Up52.xml");

	vector<string> bytes_up53 = down_XML_to_bytes("Up53.xml");
	Data_link dlup53 = up_bytes_to_struct(bytes_up53, "Up53.xml");

	vector<string> bytes_up55 = down_XML_to_bytes("Up55.xml");
	Data_link dlup55 = up_bytes_to_struct(bytes_up55, "Up55.xml");

	vector<string> bytes_up56 = down_XML_to_bytes("Up56.xml");
	Data_link dlup56 = up_bytes_to_struct(bytes_up56, "Up56.xml");

	vector<string> bytes_up57 = down_XML_to_bytes("Up57.xml");
	Data_link dlup57 = up_bytes_to_struct(bytes_up57, "Up57.xml");

	vector<string> bytes_up58 = down_XML_to_bytes("Up58.xml");
	Data_link dlup58 = up_bytes_to_struct(bytes_up58, "Up58.xml");

	vector<string> bytes_up59 = down_XML_to_bytes("Up59.xml");
	Data_link dlup59 = up_bytes_to_struct(bytes_up59, "Up59.xml");

	vector<string> bytes_up60 = down_XML_to_bytes("Up60.xml");
	Data_link dlup60 = up_bytes_to_struct(bytes_up60, "Up60.xml");

	vector<string> bytes_up61 = down_XML_to_bytes("Up61.xml");
	Data_link dlup61 = up_bytes_to_struct(bytes_up61, "Up61.xml");

	vector<string> bytes_up63 = down_XML_to_bytes("Up63.xml");
	Data_link dlup63 = up_bytes_to_struct(bytes_up63, "Up63.xml");

	vector<string> bytes_up79 = down_XML_to_bytes("Up79.xml");
	Data_link dlup79 = up_bytes_to_struct(bytes_up79, "Up79.xml");

	vector<string> bytes_up80 = down_XML_to_bytes("Up80.xml");
	Data_link dlup80 = up_bytes_to_struct(bytes_up80, "Up80.xml");

	vector<string> bytes_up81 = down_XML_to_bytes("Up81.xml");
	Data_link dlup81 = up_bytes_to_struct(bytes_up81, "Up81.xml");

	vector<string> bytes_up82 = down_XML_to_bytes("Up82.xml");
	Data_link dlup82 = up_bytes_to_struct(bytes_up82, "Up82.xml");

	vector<string> bytes_up84 = down_XML_to_bytes("Up84.xml");
	Data_link dlup84 = up_bytes_to_struct(bytes_up84, "Up84.xml");

	cout << "\n";

	system("pause");
	return 0;
}

	///************************************************************************
	//*		UP: XML to STRUCTURE				  	 						*
	//*												 						*
	//*	Input: 	XML  Up46: Cross "LIMC" at "filghtLevel 300" 	 			*
	//*	Output: structure with message up46			     					*
	//*************************************************************************/

	//Data_link data_link_up46 = up_XML_to_struct("Up46.xml");
	//cout << "msg-element id:" + data_link_up46.msg_element_id + "\n";
	//cout << data_link_up46.param1 + ": " + data_link_up46.value1 + "\n";
	//cout << data_link_up46.param2 + ": " + data_link_up46.value2 + "\n";
	//cout << data_link_up46.param3 + ": " + data_link_up46.value3 + "\n";
	//cout << data_link_up46.param4 + ": " + data_link_up46.value4 + "\n";
	//cout << data_link_up46.param5 + ": " + data_link_up46.value5 + "\n";
	//cout << data_link_up46.param6 + ": " + data_link_up46.value6 + "\n";
	//cout << data_link_up46.param7 + ": " + data_link_up46.value7 + "\n";
	//cout << data_link_up46.param8 + ": " + data_link_up46.value8 + "\n";
	//cout << data_link_up46.param9 + ": " + data_link_up46.value9 + "\n";



	///************************************************************************
	//*		UP: XML to STRUCTURE				  	 						*
	//*												 						*
	//*	Input: 	XML  Up19: Maintain "filghtLevel 300" 	 			*
	//*	Output: structure with message up19			     					*
	//*************************************************************************/

	//Data_link data_link_up19 = up_XML_to_struct("Up19.xml");

	//cout << "\n";
	//cout << "msg-element id:" + data_link_up19.msg_element_id + "\n";
	//cout << data_link_up19.param1 + ": " + data_link_up19.value1 + "\n";
	//cout << data_link_up19.param2 + ": " + data_link_up19.value2 + "\n";
	//cout << data_link_up19.param3 + ": " + data_link_up19.value3 + "\n";
	//cout << data_link_up19.param4 + ": " + data_link_up19.value4 + "\n";
	//cout << data_link_up19.param5 + ": " + data_link_up19.value5 + "\n";
	//cout << data_link_up19.param6 + ": " + data_link_up19.value6 + "\n";
	//cout << data_link_up19.param7 + ": " + data_link_up19.value7 + "\n";
	//cout << data_link_up19.param8 + ": " + data_link_up19.value8 + "\n";
	//cout << data_link_up19.param9 + ": " + data_link_up19.value9 + "\n";

	//cout<< "\n\n----Finised----\n";





	/**************************************
	*	Struct to XML	up19			  *
	***************************************/

	//struct Data_Link {
	//	string flight_id;
	//	Direction direction;
	//	string date;
	//	string time;
	//	string msg_element_id;
	//	Units units;
	//	string leveldata1_value;
	//};

	//struct Data_Link u19 = { "AAL123", up, "2002/03/29", "10:59:33", "19", flightLevel, "300"};

	/////*	cpdlc_message attribute */
	//Cpdlc_message cpdlc_message;
	//cpdlc_message.cpdlc_msg_ATTR.flight_id = u19.flight_id;
	//cpdlc_message.cpdlc_msg_ATTR.direction = u19.direction;

	///* header */
	//string date = u19.date;
	//string time = u19.time;
	//cpdlc_message.header.date = u19.date.c_str();
	//cpdlc_message.header.time = u19.time.c_str();

	//cpdlc_message.msg_element.msg_element_ATTR.id = u19.msg_element_id;
	//
	//Units units = flightLevel;
	//cpdlc_message.msg_element.level.level_ELE.leveldata1.leveldata_ATTR.units = u19.units;
	//cpdlc_message.msg_element.level.level_ELE.leveldata1.PCDATA = u19.leveldata1_value;

	//struct_to_XML(cpdlc_message);

	/**************************************
	*	XML to Struct	up19		      *
	***************************************/
	//string xml_filename = "SavedData.xml";
	//Data_Link data_link = XML_to_struct(xml_filename);
	
	//cout << data_link.date;
	//cout << data_link.time;
	//cout << data_link.msg_element_id;
	//cout << data_link.units;

	/**************************************
	*	XML to Struct	up46		      *
	***************************************/
	//string xml_filename = "SavedData.xml";
	//Data_Link data_link = XML_to_struct(xml_filename);
	
	//cout << data_link.date;
	//cout << data_link.time;
	//cout << data_link.msg_element_id;
	//cout << data_link.units;


