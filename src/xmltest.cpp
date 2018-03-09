
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
	/*************************************************
	*		DOWN: STRUCTURE to XML				  	 *
	*												 *
	*	Input: structure with message down65		 *
	*	Output: XML "Due to weather"			     *
	**************************************************/

	Data_link down65;
	down65.msg_element_id = "65";
	down65.param1 = "flight_id";
	down65.param2 = "date";
	down65.param3 = "time";

	down65.value1 = "AAL123";
	down65.value2 = "2002/03/29";
	down65.value3 = "10:59:33";

	down_struct_to_XML(down65);




	/************************************************************************
	*		UP: XML to STRUCTURE				  	 						*
	*												 						*
	*	Input: 	XML  Up46: Cross "LIMC" at "filghtLevel 300" 	 			*
	*	Output: structure with message up46			     					*
	*************************************************************************/

	Data_link data_link_up46 = up_XML_to_struct("Up46.xml");
	cout << "msg-element id:" + data_link_up46.msg_element_id + "\n";
	cout << data_link_up46.param1 + ": " + data_link_up46.value1 + "\n";
	cout << data_link_up46.param2 + ": " + data_link_up46.value2 + "\n";
	cout << data_link_up46.param3 + ": " + data_link_up46.value3 + "\n";
	cout << data_link_up46.param4 + ": " + data_link_up46.value4 + "\n";
	cout << data_link_up46.param5 + ": " + data_link_up46.value5 + "\n";
	cout << data_link_up46.param6 + ": " + data_link_up46.value6 + "\n";
	cout << data_link_up46.param7 + ": " + data_link_up46.value7 + "\n";
	cout << data_link_up46.param8 + ": " + data_link_up46.value8 + "\n";
	cout << data_link_up46.param9 + ": " + data_link_up46.value9 + "\n";



	/************************************************************************
	*		UP: XML to STRUCTURE				  	 						*
	*												 						*
	*	Input: 	XML  Up19: Maintain "filghtLevel 300" 	 			*
	*	Output: structure with message up19			     					*
	*************************************************************************/

	Data_link data_link_up19 = up_XML_to_struct("Up19.xml");

	cout << "\n";
	cout << "msg-element id:" + data_link_up19.msg_element_id + "\n";
	cout << data_link_up19.param1 + ": " + data_link_up19.value1 + "\n";
	cout << data_link_up19.param2 + ": " + data_link_up19.value2 + "\n";
	cout << data_link_up19.param3 + ": " + data_link_up19.value3 + "\n";
	cout << data_link_up19.param4 + ": " + data_link_up19.value4 + "\n";
	cout << data_link_up19.param5 + ": " + data_link_up19.value5 + "\n";
	cout << data_link_up19.param6 + ": " + data_link_up19.value6 + "\n";
	cout << data_link_up19.param7 + ": " + data_link_up19.value7 + "\n";
	cout << data_link_up19.param8 + ": " + data_link_up19.value8 + "\n";
	cout << data_link_up19.param9 + ": " + data_link_up19.value9 + "\n";

	cout<< "\n\n----Finised----\n";
	return 0;
}



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


