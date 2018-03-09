#ifndef MYXML_H
#define MYXML_H


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

	string value1;	// "flight_id: AAL123"
	string value2;	// "date: 2002/03/29"
	string value3; 	// "time: 10:59:33"
	string value4;
	string value5;
	string value6;
	string value7;
	string value8;
	string value9;

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


#endif