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
	*		UP: Byte Data to  STRUCTURE											*
	*		Msg up0 - up84														*
	*																			*
	*	Input: HEX DataBytes "up"	(file stored in directory "msg_original")	*
	*	Output: Structure (file stored in the directory "msg_generated")		*
	*																			*
	*	Release Date: 25-03-2018												*
	*****************************************************************************/
	/*vector<string> bytes_up0 = fake_down_XML_to_bytes("Up0.xml");
	Data_link dlup0 = up_bytes_to_struct(bytes_up0, "Up0.xml");


	vector<string> bytes_up1 = fake_down_XML_to_bytes("Up1.xml");
	Data_link dlup1 = up_bytes_to_struct(bytes_up1, "Up1.xml");

	vector<string> bytes_up2 = fake_down_XML_to_bytes("Up2.xml");
	Data_link dlup2 = up_bytes_to_struct(bytes_up2, "Up2.xml");

	vector<string> bytes_up46 = fake_down_XML_to_bytes("Up46.xml");
	Data_link dlup46 = up_bytes_to_struct(bytes_up46, "Up46.xml");

	vector<string> bytes_up46_airport = fake_down_XML_to_bytes("Up46_airport.xml");
	Data_link dlup46_airport = up_bytes_to_struct(bytes_up46_airport, "Up46_airport.xml");

	vector<string> bytes_up46_latLong = fake_down_XML_to_bytes("Up46_latLong.xml");
	Data_link dlup46_latLong = up_bytes_to_struct(bytes_up46_latLong, "Up46_latLong.xml");

	vector<string> bytes_up47 = fake_down_XML_to_bytes("Up47.xml");
	Data_link dlup47 = up_bytes_to_struct(bytes_up47, "Up47.xml");

	vector<string> bytes_up48 = fake_down_XML_to_bytes("Up48_latLong.xml");
	Data_link dlup48 = up_bytes_to_struct(bytes_up48, "Up48_latLong.xml");

	vector<string> bytes_up51 = fake_down_XML_to_bytes("Up51.xml");
	Data_link dlup51 = up_bytes_to_struct(bytes_up51, "Up51.xml");

	vector<string> bytes_up52 = fake_down_XML_to_bytes("Up52.xml");
	Data_link dlup52 = up_bytes_to_struct(bytes_up52, "Up52.xml");

	vector<string> bytes_up53 = fake_down_XML_to_bytes("Up53.xml");
	Data_link dlup53 = up_bytes_to_struct(bytes_up53, "Up53.xml");

	vector<string> bytes_up55 = fake_down_XML_to_bytes("Up55.xml");
	Data_link dlup55 = up_bytes_to_struct(bytes_up55, "Up55.xml");

	vector<string> bytes_up56 = fake_down_XML_to_bytes("Up56.xml");
	Data_link dlup56 = up_bytes_to_struct(bytes_up56, "Up56.xml");

	vector<string> bytes_up57 = fake_down_XML_to_bytes("Up57.xml");
	Data_link dlup57 = up_bytes_to_struct(bytes_up57, "Up57.xml");

	vector<string> bytes_up58 = fake_down_XML_to_bytes("Up58.xml");
	Data_link dlup58 = up_bytes_to_struct(bytes_up58, "Up58.xml");

	vector<string> bytes_up59 = fake_down_XML_to_bytes("Up59.xml");
	Data_link dlup59 = up_bytes_to_struct(bytes_up59, "Up59.xml");

	vector<string> bytes_up60 = fake_down_XML_to_bytes("Up60.xml");
	Data_link dlup60 = up_bytes_to_struct(bytes_up60, "Up60.xml");

	vector<string> bytes_up61 = fake_down_XML_to_bytes("Up61.xml");
	Data_link dlup61 = up_bytes_to_struct(bytes_up61, "Up61.xml");

	vector<string> bytes_up63 = fake_down_XML_to_bytes("Up63.xml");
	Data_link dlup63 = up_bytes_to_struct(bytes_up63, "Up63.xml");

	vector<string> bytes_up79 = fake_down_XML_to_bytes("Up79.xml");
	Data_link dlup79 = up_bytes_to_struct(bytes_up79, "Up79.xml");

	vector<string> bytes_up80 = fake_down_XML_to_bytes("Up80.xml");
	Data_link dlup80 = up_bytes_to_struct(bytes_up80, "Up80.xml");

	vector<string> bytes_up81 = fake_down_XML_to_bytes("Up81.xml");
	Data_link dlup81 = up_bytes_to_struct(bytes_up81, "Up81.xml");

	vector<string> bytes_up82 = fake_down_XML_to_bytes("Up82.xml");
	Data_link dlup82 = up_bytes_to_struct(bytes_up82, "Up82.xml");

	vector<string> bytes_up84 = fake_down_XML_to_bytes("Up84.xml");
	Data_link dlup84 = up_bytes_to_struct(bytes_up84, "Up84.xml");*/

	/****************************************************************************
	*		UP: Byte Data to  STRUCTURE											*
	*		Msg up106 - up														*
	*																			*
	*	Input: HEX DataBytes "up"	(file stored in directory "msg_original")	*
	*	Output: Structure (file stored in the directory "msg_generated")		*
	*																			*
	*	Release Date: 26-03-2018												*
	*****************************************************************************/
	
	/*vector<string> bytes_up106 = fake_down_XML_to_bytes("Up106.xml");
	Data_link dlup106 = up_bytes_to_struct(bytes_up106, "Up106.xml");

	vector<string> bytes_up107 = fake_down_XML_to_bytes("Up107.xml");
	Data_link dlup107 = up_bytes_to_struct(bytes_up107, "Up107.xml");

	vector<string> bytes_up108 = fake_down_XML_to_bytes("Up108.xml");
	Data_link dlup108 = up_bytes_to_struct(bytes_up108, "Up108.xml");

	vector<string> bytes_up109 = fake_down_XML_to_bytes("Up109.xml");
	Data_link dlup109 = up_bytes_to_struct(bytes_up109, "Up109.xml");

	vector<string> bytes_up110 = fake_down_XML_to_bytes("Up110.xml");
	Data_link dlup110 = up_bytes_to_struct(bytes_up110, "Up110.xml");
	
	vector<string> bytes_up116 = fake_down_XML_to_bytes("Up116.xml");
	Data_link dlup116 = up_bytes_to_struct(bytes_up116, "Up116.xml");

	vector<string> bytes_up143 = fake_down_XML_to_bytes("Up143.xml");
	Data_link dlup143 = up_bytes_to_struct(bytes_up143, "Up143.xml");

	vector<string> bytes_up162 = fake_down_XML_to_bytes("Up162.xml");
	Data_link dlup162 = up_bytes_to_struct(bytes_up162, "Up162.xml");

	vector<string> bytes_up211 = fake_down_XML_to_bytes("Up211.xml");
	Data_link dlup211 = up_bytes_to_struct(bytes_up211, "Up211.xml");

	vector<string> bytes_up218 = fake_down_XML_to_bytes("Up218.xml");
	Data_link dlup218 = up_bytes_to_struct(bytes_up218, "Up218.xml");

	vector<string> bytes_up222 = fake_down_XML_to_bytes("Up222.xml");
	Data_link dlup222 = up_bytes_to_struct(bytes_up222, "Up222.xml");

	vector<string> bytes_up224 = fake_down_XML_to_bytes("Up224.xml");
	Data_link dlup224 = up_bytes_to_struct(bytes_up224, "Up224.xml");

	vector<string> bytes_up225 = fake_down_XML_to_bytes("Up225.xml");
	Data_link dlup225 = up_bytes_to_struct(bytes_up225, "Up225.xml");

	vector<string> bytes_up227 = fake_down_XML_to_bytes("Up227.xml");
	Data_link dlup227 = up_bytes_to_struct(bytes_up227, "Up227.xml");

	vector<string> bytes_up237 = fake_down_XML_to_bytes("Up237.xml");
	Data_link dlup237 = up_bytes_to_struct(bytes_up237, "Up237.xml");

	vector<string> bytes_up247 = fake_down_XML_to_bytes("Up247.xml");
	Data_link dlup247 = up_bytes_to_struct(bytes_up247, "Up247.xml");

	vector<string> bytes_up293 = fake_down_XML_to_bytes("Up293.xml");
	Data_link dlup293 = up_bytes_to_struct(bytes_up293, "Up293.xml"); 

	vector<string> bytes_up320 = fake_down_XML_to_bytes("Up320.xml");
	Data_link dlup320 = up_bytes_to_struct(bytes_up320, "Up320.xml");*/

	

	/****************************************************************************
	*		UP: Byte Data to  STRUCTURE											*
	*		Msg up106 - up														*
	*																			*
	*	Input: HEX DataBytes "up"	(file stored in directory "msg_original")	*
	*	Output: Structure (file stored in the directory "msg_generated")		*
	*																			*
	*	Release Date: 02-04-2018												*
	*****************************************************************************/

	/*vector<string> bytes_up159 = fake_down_XML_to_bytes("Up159.xml");
	Data_link dlup159 = up_bytes_to_struct(bytes_up159, "Up159.xml");

	vector<string> bytes_up169 = fake_down_XML_to_bytes("Up169.xml");
	Data_link dlup169 = up_bytes_to_struct(bytes_up159, "Up169.xml");

	vector<string> bytes_up183 = fake_down_XML_to_bytes("Up183.xml");
	Data_link dlup183 = up_bytes_to_struct(bytes_up159, "Up183.xml");

	vector<string> bytes_up187 = fake_down_XML_to_bytes("Up187.xml");
	Data_link dlup187 = up_bytes_to_struct(bytes_up187, "Up187.xml");

	vector<string> bytes_up188 = fake_down_XML_to_bytes("Up188.xml");
	Data_link dlup188 = up_bytes_to_struct(bytes_up188, "Up188.xml");

	vector<string> bytes_up249 = fake_down_XML_to_bytes("Up249.xml");
	Data_link dlup249 = up_bytes_to_struct(bytes_up249, "Up249.xml");

	vector<string> bytes_up265 = fake_down_XML_to_bytes("Up265.xml");
	Data_link dlup265 = up_bytes_to_struct(bytes_up265, "Up265.xml");

	vector<string> bytes_up288 = fake_down_XML_to_bytes("Up288.xml");
	Data_link dlup288 = up_bytes_to_struct(bytes_up288, "Up288.xml");

	vector<string> bytes_up289 = fake_down_XML_to_bytes("Up289.xml");
	Data_link dlup289 = up_bytes_to_struct(bytes_up289, "Up289.xml");

	vector<string> bytes_up290 = fake_down_XML_to_bytes("Up290.xml");
	Data_link dlup290 = up_bytes_to_struct(bytes_up290, "Up290.xml");

	vector<string> bytes_up291 = fake_down_XML_to_bytes("Up291.xml");
	Data_link dlup291 = up_bytes_to_struct(bytes_up291, "Up291.xml");

	vector<string> bytes_up292 = fake_down_XML_to_bytes("Up292.xml");
	Data_link dlup292 = up_bytes_to_struct(bytes_up292, "Up292.xml");

	vector<string> bytes_up322 = fake_down_XML_to_bytes("Up322.xml");
	Data_link dlup322 = up_bytes_to_struct(bytes_up322, "Up322.xml");

	vector<string> bytes_up323 = fake_down_XML_to_bytes("Up323.xml");
	Data_link dlup323 = up_bytes_to_struct(bytes_up323, "Up323.xml");

	vector<string> bytes_up324 = fake_down_XML_to_bytes("Up324.xml");
	Data_link dlup324 = up_bytes_to_struct(bytes_up324, "Up324.xml");

	vector<string> bytes_up340 = fake_down_XML_to_bytes("Up340.xml");
	Data_link dlup340 = up_bytes_to_struct(bytes_up340, "Up340.xml");

	vector<string> bytes_up341 = fake_down_XML_to_bytes("Up341.xml");
	Data_link dlup341 = up_bytes_to_struct(bytes_up341, "Up341.xml");*/

	/****************************************************************************
	*		UP: Byte Data to  STRUCTURE											*
	*		Msg down															*
	*																			*
	*	Input: HEX DataBytes "down"	(file stored in directory "msg_original")	*
	*	Output: Structure (file stored in the directory "msg_generated")		*
	*																			*
	*	Release Date: 05-04-2018												*
	*****************************************************************************/
	vector<string> bytes_up46 = fake_down_XML_to_bytes("Up46.xml");
	Data_link dlup46 = up_bytes_to_struct(bytes_up46, "Up46.xml");

	vector<string> bytes_up46_airport = fake_down_XML_to_bytes("Up46_airport.xml");
	Data_link dlup46_airport = up_bytes_to_struct(bytes_up46_airport, "Up46_airport.xml");

	vector<string> bytes_up46_latLong = fake_down_XML_to_bytes("Up46_latLong.xml");
	Data_link dlup46_latLong = up_bytes_to_struct(bytes_up46_latLong, "Up46_latLong.xml");

	/*
	Data_link dldown0;
	dldown0.msg_element_id = "0";
	dldown0.param1 = "flight-id";
	dldown0.param2 = "direction";
	dldown0.param3 = "date";
	dldown0.param4 = "time";
	dldown0.param5 = "msg-element";
	dldown0.param6 = "id";

	dldown0.value1 = "ABC333";
	dldown0.value2 = "down";
	dldown0.value3 = "2018/03/12";
	dldown0.value4 = "22:36:43";
	dldown0.value5 = "";
	dldown0.value6 = "0";

	vector<string> byets_down0 = down_struct_to_bytes(dldown0, "Down0.xml");


	Data_link dldown1;
	dldown1.msg_element_id = "1";
	dldown1.param1 = "flight-id";
	dldown1.param2 = "direction";
	dldown1.param3 = "date";
	dldown1.param4 = "time";
	dldown1.param5 = "msg-element";
	dldown1.param6 = "id";

	dldown1.value1 = "ABC333";
	dldown1.value2 = "down";
	dldown1.value3 = "2018/03/12";
	dldown1.value4 = "22:36:43";
	dldown1.value5 = "";
	dldown1.value6 = "1";

	vector<string> byets_down1 = down_struct_to_bytes(dldown1, "Down1.xml");


	Data_link dldown2;
	dldown2.msg_element_id = "2";
	dldown2.param1 = "flight-id";
	dldown2.param2 = "direction";
	dldown2.param3 = "date";
	dldown2.param4 = "time";
	dldown2.param5 = "msg-element";
	dldown2.param6 = "id";

	dldown2.value1 = "ABC333";
	dldown2.value2 = "down";
	dldown2.value3 = "2018/03/12";
	dldown2.value4 = "22:36:43";
	dldown2.value5 = "";
	dldown2.value6 = "2";

	vector<string> byets_down2 = down_struct_to_bytes(dldown2, "Down2.xml");*/

	//Data_link dldown1 = up_XML_to_struct("Down1.xml");
	//vector<string> byets_down1 = down_struct_to_bytes(dldown1, "Down1.xml");

	//Data_link dldown2 = up_XML_to_struct("Down2.xml");
	//vector<string> byets_down2 = down_struct_to_bytes(dldown2, "Down2.xml");

	//Data_link dldown23 = up_XML_to_struct("Down23.xml");
	//vector<string> byets_down23 = down_struct_to_bytes(dldown23, "Down23.xml");

	//Data_link dldown62 = up_XML_to_struct("Down62.xml");
	//vector<string> byets_down62 = down_struct_to_bytes(dldown62, "Down62.xml");

	//Data_link dldown65 = up_XML_to_struct("Down65.xml");
	//vector<string> byets_down65 = down_struct_to_bytes(dldown65, "Down65.xml");
	//
	//Data_link dldown97 = up_XML_to_struct("Down97.xml");
	//vector<string> byets_down97 = down_struct_to_bytes(dldown97, "Down97.xml");

	//Data_link dldown98 = up_XML_to_struct("Down98.xml");
	//vector<string> byets_down98 = down_struct_to_bytes(dldown98, "Down98.xml");

	//Data_link dldown1 = up_XML_to_struct("Down100.xml");
	//vector<string> byets_down1 = down_struct_to_bytes(dldown1, "Down100.xml");

	//Data_link dldown1 = up_XML_to_struct("Down145.xml");
	//vector<string> byets_down1 = down_struct_to_bytes(dldown1, "Down145.xml");

	//Data_link dldown1 = up_XML_to_struct("Down155.xml");
	//vector<string> byets_down1 = down_struct_to_bytes(dldown1, "Down155.xml");

	//Data_link dldown139 = up_XML_to_struct("Down139.xml");
	//vector<string> byets_down139 = down_struct_to_bytes(dldown139, "Down139.xml");

	//Data_link dldown140 = up_XML_to_struct("Down140.xml");
	//vector<string> byets_down140 = down_struct_to_bytes(dldown140, "Down140.xml");

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


