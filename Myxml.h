#ifndef MYXML_H
#define MYXML_H

#include "stdafx.h"
#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

typedef struct {
	char* flight_id;
//	char* icao_24_bit;
//	char* tail_number;
	char* logged_at;
} Stdatts;	//p51

enum Units {feet, metres, flightLevel, metricFlightLevel};
enum Role {current, waypoint};

typedef struct {
	int units;
	int role;
} Leveldata_ATTR;	//p52

typedef struct {
	string PCDATA;		// Leveldata_ELE = 300
	Leveldata_ATTR leveldata_ATTR;
} Leveldata;		// p52


typedef struct {
	Leveldata	leveldata1;
	Leveldata	Leveldata2;
} Level_ELE;

typedef struct {
	// Not for now

} Level_ATTR;	//p52

typedef struct {
	Level_ELE	level_ELE;
	Level_ATTR	level_ATTR;
} Level;		//p52


typedef struct {
	string id;
	Level	level;
	//Time
	//Position
} Msg_element_ATTR;  //p55


typedef struct {
	// Element from %param
	Level	level;	// * or
	//Time			// * or
	//Position		// * or

	Msg_element_ATTR msg_element_ATTR;
} Msg_element;	//p55, p51

typedef struct {
	//char  *msg_id;	not now
	string date;	// 1
	string time;	// 1
} Header;	//p55, p56

typedef struct {
	Header header;				//1
	Msg_element msg_element;	
} Cpdlc_message_ELE;  //p51

enum Direction {down, up};

typedef struct {
	string flight_id;	// REQUIRED
//	char* icao_24_bit;
//	char* tail_number;
	string logged_at;	// REQUIRED

	int direction;			//REQUIRED

}Cpdlc_message_ATTR;		//p54

//typedef struct {
//	Header header;		
//	Msg_element msg_element;	// +
//} Message;			//p52

typedef struct {
	Header header;		
	Msg_element msg_element;	// +
	Cpdlc_message_ATTR  cpdlc_msg_ATTR;	//REQUIRED
} Cpdlc_message;		//p54, p52


typedef struct Data_link {
	string msg_element_id;
	
	string param1;  // "flight_id"
	string param2;	// "direction"
	string param3; 	// "date"
	string param4;	// "time"
	string param5;
	string param6;
	string param7;
	string param8;
	string param9;
	string param10;
	string param11;
	string param12;
	string param13;
	string param14;
	string param15;
	string param16;
	string param17;
	string param18;
	string param19;
	string param20;
	string param21;
	string param22;
	string param23;
	string param24;
	string param25;
	string param26;
	string param27;
	string param28;
	string param29;
	string param30;
	string param31;
	string param32;
	string param33;
	string param34;
	string param35;
	string param36;
	string param37;
	string param38;
	string param39;
	string param40;
	string param41;
	string param42;
	string param43;
	string param44;
	string param45;
	string param46;
	string param47;
	string param48;
	string param49;
	string param50;
	string param51;



	string value1;	// "flight_id: AAL123"
	string value2;	// "date: 2002/03/29"
	string value3; 	// "time: 10:59:33"
	string value4;
	string value5;
	string value6;
	string value7;
	string value8;
	string value9;
	string value10;
	string value11;
	string value12;
	string value13;
	string value14;
	string value15;
	string value16;
	string value17;
	string value18;
	string value19;
	string value20;
	string value21;
	string value22;
	string value23;
	string value24;
	string value25;
	string value26;
	string value27;
	string value28;
	string value29;
	string value30;
	string value31;
	string value32;
	string value33;
	string value34;
	string value35;
	string value36;
	string value37;
	string value38;
	string value39;
	string value40;
	string value41;
	string value42;
	string value43;
	string value44;
	string value45;
	string value46;
	string value47;
	string value48;
	string value49;
	string value50;
	string value51;



} Data_link;


/*************************************************
*		DOWN: STRUCTURE to XML				  	 *
*												 *
*	Input: structure with message downXX		 *
*	Output: XML "Due to weather"			     *
**************************************************/



void down_struct_to_XML(Data_link datalink);

/*************************************************
*		UP: XML to STRUCTURE				  	 *
*												 *
*	Input: 	XML   UpXX	 					 	 *
*	Output: structure with message upXX			 *
**************************************************/

Data_link up_XML_to_struct(string filename);

/*************************************************
*		Down XML to Data Bytes				  	 *
*												 *
*	Input: 	XML   DownXX	 					 *
*	Output: Data bytes HEX vector 				 *
**************************************************/

vector<string> down_XML_to_bytes(string xml_filename);

/*************************************************
*		Up Data Bytes to XML				  	 *
*												 *
*	Input: 	Data bytes HEX vector  UpXX	 		 *
*	Output: XML UpXX  							 *
**************************************************/

void	up_bytes_to_XML(vector<string> vector_databytes, string xml_filename);

/*************************************************
*		Up Data Bytes to Structure Data Link	 *
*												 *
*	Input: 	Data bytes HEX vector				 *
*	Output: Structure Data Link  				 *
**************************************************/

Data_link	up_bytes_to_struct(vector<string> vector_databytes, string xml_filename);

/*************************************************
*		Down Structure Data Link to Data Bytes   *
*												 *
*	Input: 	Structure Data Link					 *
*	Output: Data bytes HEX vector  				 *
**************************************************/

vector<string> down_struct_to_bytes(Data_link datalink, string xml_filename);

#endif
