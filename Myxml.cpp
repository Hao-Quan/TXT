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
	data_link.param10 = "empty";
	data_link.param11 = "empty";
	data_link.param12 = "empty";
	data_link.param13 = "empty";
	data_link.param14 = "empty";
	data_link.param15 = "empty";
	data_link.param16 = "empty";
	data_link.param17 = "empty";
	data_link.param18 = "empty";
	data_link.param19 = "empty";
	data_link.param20 = "empty";
	data_link.param21 = "empty";
	data_link.param22 = "empty";
	data_link.param23 = "empty";
	data_link.param24 = "empty";
	data_link.param25 = "empty";
	data_link.param26 = "empty";
	data_link.param27 = "empty";
	data_link.param28 = "empty";
	data_link.param29 = "empty";
	data_link.param30 = "empty";
	data_link.param31 = "empty";
	data_link.param32 = "empty";
	data_link.param33 = "empty";
	data_link.param34 = "empty";
	data_link.param35 = "empty";
	data_link.param36 = "empty";
	data_link.param37 = "empty";
	data_link.param38 = "empty";
	data_link.param39 = "empty";
	data_link.param40 = "empty";
	data_link.param41 = "empty";


	data_link.value1 = "empty";
	data_link.value2 = "empty";
	data_link.value3 = "empty";
	data_link.value4 = "empty";
	data_link.value5 = "empty";
	data_link.value6 = "empty";
	data_link.value7 = "empty";
	data_link.value8 = "empty";
	data_link.value9 = "empty";
	data_link.value10 = "empty";
	data_link.value11 = "empty";
	data_link.value12 = "empty";
	data_link.value13 = "empty";
	data_link.value14 = "empty";
	data_link.value15 = "empty";
	data_link.value16 = "empty";
	data_link.value17 = "empty";
	data_link.value18 = "empty";
	data_link.value19 = "empty";
	data_link.value20 = "empty";
	data_link.value21 = "empty";
	data_link.value22 = "empty";
	data_link.value23 = "empty";
	data_link.value24 = "empty";
	data_link.value25 = "empty";
	data_link.value26 = "empty";
	data_link.value27 = "empty";
	data_link.value28 = "empty";
	data_link.value29 = "empty";
	data_link.value30 = "empty";
	data_link.value31 = "empty";
	data_link.value32 = "empty";
	data_link.value33 = "empty";
	data_link.value34 = "empty";
	data_link.value35 = "empty";
	data_link.value36 = "empty";
	data_link.value37 = "empty";
	data_link.value38 = "empty";
	data_link.value39 = "empty";
	data_link.value40 = "empty";
	data_link.value41 = "empty";

	XMLDocument xmlDoc;
	//XMLError eResult = xmlDoc.LoadFile(xml_filename.c_str());
	char file_path[100];
	char *path_dir = "msg_original/";
	const char *filename_ch = xml_filename.c_str();
	strcpy_s(file_path, path_dir);
	strcat(file_path, filename_ch);
	XMLError eResult = xmlDoc.LoadFile(file_path);
	XMLCheckResult(eResult);
	
	int count = 1;
	const char *msg_element_id;

	XMLElement *pRoot = xmlDoc.RootElement();
	if (pRoot == NULL)
		cout << "Null pointer: " << XML_ERROR_FILE_READ_ERROR;

	const char *flight_id;
	flight_id = pRoot->Attribute("flight-id");
	if (flight_id == NULL) cout << XML_ERROR_PARSING_ATTRIBUTE;
	data_link.param1 = "flight_id";
	data_link.value1 = flight_id;
	count++;		//2

	const char *direction;
	direction = pRoot->Attribute("direction");
	if (direction == NULL) cout << XML_ERROR_PARSING_ATTRIBUTE;
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
			data_link.param5 = "msg-element";
			data_link.value5 = "";
			msg_element_id = i->Attribute("id");
			data_link.param6 = "id";
			data_link.value6 = msg_element_id;
			data_link.msg_element_id = msg_element_id;
			count++;


			for (XMLElement *item = i->FirstChildElement(); item != NULL; item = item->NextSiblingElement()) {
				const char *element_name_sub = item->Name();

				/*************************
				*		position		 *
				*************************/

				if (!strcmp(element_name_sub, "position")) {
					data_link.param7 = "position";
					data_link.value7 = "";

					const char *position_direction = NULL;
					const char *position_role = NULL;
					if (item->Attribute("direction")) {
						position_direction = item->Attribute("direction");
						data_link.param8 = "direction";
						data_link.value8 = position_direction;
						count++;
					}
					if (item->Attribute("role")) {
						position_role = item->Attribute("role");
						data_link.param9 = "role";
						data_link.value9 = position_role;
						count++;
					}
					/***********/
					/* Airpot */
					/***********/
					if (item->FirstChildElement("airport")) {
						XMLElement *airport_element = NULL;
						const char *airport;
						const char *airport_role;

						airport_element = item->FirstChildElement("airport");
						airport = airport_element->GetText();
						data_link.param10 = "airport";
						data_link.value10 = airport;

						if (airport_element->Attribute("role")) {
							airport_role = airport_element->Attribute("role");
							data_link.param11 = "role";
							data_link.value11 = airport_role;
						}
					}
					/***********/
					/* latLong */
					/***********/
					else if (item->FirstChildElement("latLong")) {
						XMLElement *latLong_element = NULL;
						XMLElement *latitude_element = NULL;
						XMLElement *latLong_latitude_element = NULL;
						XMLElement *latLong_latitude_degrees_element = NULL;
						const char *fix_o_navaid_name;
						const char *latitude_direction;
						const char *latLong_latitude_degrees_units;
						const char *latLong_latitude_degrees_role;
						const char *latLong_latitude_degrees;
						const char *latLong_latitude_minutes;
						const char *latLong_latitude_seconds;

						XMLElement *latLong_longitude_element = NULL;
						XMLElement *latLong_longitude_degrees_element = NULL;
						const char *longitude_direction;
						const char *latLong_longitude_degrees_units;
						const char *latLong_longitude_degrees_role;
						const char *latLong_longitude_degrees;
						const char *latLong_longitude_minutes;
						const char *latLong_longitude_seconds;

						latLong_element = item->FirstChildElement("latLong");
						data_link.param10 = "latLong";
						data_link.value10 = "";

						if (latLong_element->FirstChildElement("latitude")) {
							data_link.param11 = "latitude";
							data_link.value11 = "";
							latLong_latitude_element = latLong_element->FirstChildElement("latitude");
							latitude_direction = latLong_latitude_element->Attribute("direction");
							data_link.param12 = "direction";
							data_link.value12 = latitude_direction;

							//  latLong_latitude_degrees
							latLong_latitude_degrees_element = latLong_latitude_element->FirstChildElement("degrees");
							latLong_latitude_degrees = latLong_latitude_degrees_element->GetText();
							data_link.param13 = "degrees";
							data_link.value13 = latLong_latitude_degrees;

							latLong_latitude_degrees_units = latLong_latitude_degrees_element->Attribute("units");
							data_link.param14 = "units";
							data_link.value14 = latLong_latitude_degrees_units;
							if (latLong_latitude_degrees_element->Attribute("role")) {
								latLong_latitude_degrees_role = latLong_latitude_degrees_element->Attribute("role");
								data_link.param15 = "role";
								data_link.value15 = latLong_latitude_degrees_role;
							}
							

							//  latLong_latitude_minuts
							if (latLong_latitude_element->FirstChildElement("minutes")) {
								latLong_latitude_minutes = latLong_latitude_element->FirstChildElement("minutes")->GetText();
								data_link.param16 = "minutes";
								data_link.value16 = latLong_latitude_minutes;
							}
								
							//  latLong_latitude_seconds
							if (latLong_latitude_element->FirstChildElement("seconds")) {
								latLong_latitude_seconds = latLong_latitude_element->FirstChildElement("seconds")->GetText();
								data_link.param17 = "seconds";
								data_link.value17 = latLong_latitude_seconds;
							}
						}


						if (latLong_element->FirstChildElement("longitude")) {
							latLong_longitude_element = latLong_element->FirstChildElement("longitude");
							data_link.param18 = "logitude";
							data_link.value18 = "";
							longitude_direction = latLong_longitude_element->Attribute("direction");
							data_link.param19 = "direction";
							data_link.value19 = longitude_direction;

							//  latLong_latitude_degrees
							latLong_longitude_degrees_element = latLong_longitude_element->FirstChildElement("degrees");
							latLong_longitude_degrees = latLong_longitude_degrees_element->GetText();
							data_link.param20 = "degrees";
							data_link.value20 = latLong_longitude_degrees;
							latLong_longitude_degrees_units = latLong_longitude_degrees_element->Attribute("units");
							data_link.param21 = "units";
							data_link.value21 = latLong_longitude_degrees_units;
							if (latLong_longitude_degrees_element->Attribute("role")) {
								latLong_longitude_degrees_role = latLong_longitude_degrees_element->Attribute("role");
								data_link.param22 = "role";
								data_link.value22 = latLong_longitude_degrees_role;
							}

							//  latLong_latitude_minuts
							if (latLong_longitude_element->FirstChildElement("minutes")) {
								latLong_longitude_minutes = latLong_longitude_element->FirstChildElement("minutes")->GetText();
								data_link.param23 = "minutes";
								data_link.value23 = latLong_longitude_minutes;
							}
								
							//  fix_latLong_latitude_seconds
							if (latLong_longitude_element->FirstChildElement("seconds")) {
								latLong_longitude_seconds = latLong_longitude_element->FirstChildElement("seconds")->GetText();
								data_link.param24 = "seconds";
								data_link.value24 = latLong_longitude_seconds;
							}
						}


					}
					else {

						XMLElement *fix_o_navaid_element = NULL;
						XMLElement *navaid_element = NULL;	

						XMLElement *latLong_element = NULL;
						XMLElement *latitude_element = NULL;
						XMLElement *latLong_latitude_element = NULL;
						XMLElement *latLong_latitude_degrees_element = NULL;
						const char *fix_o_navaid_name;
						const char *latitude_direction;
						const char *latLong_latitude_degrees_units;
						const char *latLong_latitude_degrees_role;
						const char *latLong_latitude_degrees;
						const char *latLong_latitude_minutes;
						const char *latLong_latitude_seconds;

						XMLElement *latLong_longitude_element = NULL;
						XMLElement *latLong_longitude_degrees_element = NULL;
						const char *longitude_direction;
						const char *latLong_longitude_degrees_units;
						const char *latLong_longitude_degrees_role;
						const char *latLong_longitude_degrees;
						const char *latLong_longitude_minutes;
						const char *latLong_longitude_seconds;

						XMLElement *position_degrees_element = NULL;
						const char *position_degrees;
						const char *position_degrees_units;
						const char *position_degrees_role;

						XMLElement *position_distance_element = NULL;
						const char *position_distance;
						const char *position_distance_units;
						const char *position_distance_atwTolerance;
						const char *position_distance_specified;


						if (item->FirstChildElement("fix")){
							fix_o_navaid_element = item->FirstChildElement("fix");
							data_link.param10 = "fix";
							data_link.value10 = "";
						}
						else {
							fix_o_navaid_element = item->FirstChildElement("navaid");
							data_link.param10 = "navaid";
							data_link.value10 = "";
						}

						fix_o_navaid_name = fix_o_navaid_element->Attribute("name");
						data_link.param11 = "name";
						data_link.value11 = fix_o_navaid_name;

						if (fix_o_navaid_element->FirstChildElement("latLong")) {
							latLong_element = fix_o_navaid_element->FirstChildElement("latLong");
							data_link.param12 = "latLong";
							data_link.value12 = "";

							if (latLong_element->FirstChildElement("latitude")) {
								data_link.param13 = "latitude";
								data_link.value13 = "";
								latLong_latitude_element = latLong_element->FirstChildElement("latitude");
								latitude_direction = latLong_latitude_element->Attribute("direction");
								data_link.param14 = "direction";
								data_link.value14 = latitude_direction;

								//  latLong_latitude_degrees
								latLong_latitude_degrees_element = latLong_latitude_element->FirstChildElement("degrees");
								latLong_latitude_degrees = latLong_latitude_degrees_element->GetText();
								data_link.param15 = "degrees";
								data_link.value15 = latLong_latitude_degrees;

								latLong_latitude_degrees_units = latLong_latitude_degrees_element->Attribute("units");
								data_link.param16 = "units";
								data_link.value16 = latLong_latitude_degrees_units;
								if (latLong_latitude_degrees_element->Attribute("role")) {
									latLong_latitude_degrees_role = latLong_latitude_degrees_element->Attribute("role");
									data_link.param17 = "role";
									data_link.value17 = latLong_latitude_degrees_role;
								}
							

								//  latLong_latitude_minuts
								if (latLong_latitude_element->FirstChildElement("minutes")) {
									latLong_latitude_minutes = latLong_latitude_element->FirstChildElement("minutes")->GetText();
									data_link.param18 = "minutes";
									data_link.value18 = latLong_latitude_minutes;
								}
								
								//  latLong_latitude_seconds
								if (latLong_latitude_element->FirstChildElement("seconds")) {
									latLong_latitude_seconds = latLong_latitude_element->FirstChildElement("seconds")->GetText();
									data_link.param19 = "seconds";
									data_link.value19 = latLong_latitude_seconds;
								}
							}


							if (latLong_element->FirstChildElement("longitude")) {
								latLong_longitude_element = latLong_element->FirstChildElement("longitude");
								data_link.param20 = "logitude";
								data_link.value20 = "";
								longitude_direction = latLong_longitude_element->Attribute("direction");
								data_link.param21 = "direction";
								data_link.value21 = longitude_direction;

								//  latLong_latitude_degrees
								latLong_longitude_degrees_element = latLong_longitude_element->FirstChildElement("degrees");
								latLong_longitude_degrees = latLong_longitude_degrees_element->GetText();
								data_link.param22 = "degrees";
								data_link.value22 = latLong_longitude_degrees;
								latLong_longitude_degrees_units = latLong_longitude_degrees_element->Attribute("units");
								data_link.param23 = "units";
								data_link.value23 = latLong_longitude_degrees_units;
								if (latLong_longitude_degrees_element->Attribute("role")) {
									latLong_longitude_degrees_role = latLong_longitude_degrees_element->Attribute("role");
									data_link.param24 = "role";
									data_link.value24 = latLong_longitude_degrees_role;
								}

								//  latLong_latitude_minuts
								if (latLong_longitude_element->FirstChildElement("minutes")) {
									latLong_longitude_minutes = latLong_longitude_element->FirstChildElement("minutes")->GetText();
									data_link.param25 = "minutes";
									data_link.value25 = latLong_longitude_minutes;
								}
								
								//  fix_latLong_latitude_seconds
								if (latLong_longitude_element->FirstChildElement("seconds")) {
									latLong_longitude_seconds = latLong_longitude_element->FirstChildElement("seconds")->GetText();
									data_link.param26 = "seconds";
									data_link.value26 = latLong_longitude_seconds;
								}
							}
						}

						/* position -> degrees ? */
						if (item->FirstChildElement("degrees")) {
							position_degrees_element = item->FirstChildElement("degrees");
							position_degrees = position_degrees_element->GetText();
							data_link.param27 = "degrees";
							data_link.value27 = position_degrees;
						
						
							position_degrees_units = position_degrees_element->Attribute("units");
							data_link.param28 = "units";
							data_link.value28 = position_degrees_units;

							if (position_degrees_element->Attribute("role")) {
								position_degrees_role = position_degrees_element->Attribute("role");
								data_link.param29 = "role";
								data_link.value29 = position_degrees_role;
							}
						
						}

						/* position -> distance ? */
						if (item->FirstChildElement("distance")) {
							position_distance_element = item->FirstChildElement("distance");
							position_distance = position_distance_element->GetText();
							data_link.param30 = "distance";
							data_link.value30 = position_distance;
						
							position_distance_units = position_distance_element->Attribute("units");
							data_link.param31 = "units";
							data_link.value31 = position_distance_units;

							if (position_distance_element->Attribute("atwTolerance")) {
								position_distance_atwTolerance = position_distance_element->Attribute("atwTolerance");
								data_link.param32 = "atwTolerance";
								data_link.value32 = position_distance_atwTolerance;
							}

							position_distance_specified = position_distance_element->Attribute("specified");
							data_link.param33 = "specified";
							data_link.value33 = position_distance_specified;
						}
					}
					}

					/*************************
					*		level			 *
					*************************/
					if (!strcmp(element_name_sub, "level")) {
						XMLElement *level_element = item;
						data_link.param34 = "level";
						data_link.value34 = "";

						if (level_element->Attribute("atwTolerance")) {
							const char *level_element_atwTolerance = level_element->Attribute("atwTolerance");
							data_link.param35 = "atwTolerance";
							data_link.value35 = level_element_atwTolerance;
						}

						if (level_element->Attribute("type")) {
							const char *level_element_type = level_element->Attribute("type");
							data_link.param36 = "type";
							data_link.value36 = level_element_type;
						}

						XMLElement *leveldata_element = level_element->FirstChildElement("leveldata");
						data_link.param37 = "leveldata";
						data_link.value37 = leveldata_element->GetText();

						const char *leveldata_units = leveldata_element->Attribute("units");
						data_link.param38 = "units";
						data_link.value38 = leveldata_units;

						if (leveldata_element->Attribute("role")) {
							const char *leveldata_role = leveldata_element->Attribute("role");
							data_link.param38 = "role";
							data_link.value38 = leveldata_element->Attribute("role");
						}

						if (level_element->LastChildElement("leveldata")) {
							XMLElement *leveldata_element = level_element->FirstChildElement("leveldata");
							data_link.param39 = "leveldata";
							data_link.value39 = leveldata_element->GetText();

							const char *leveldata_units = leveldata_element->Attribute("units");
							data_link.param40 = "units";
							data_link.value40 = leveldata_element->GetText();

							if (leveldata_element->Attribute("role")) {
								const char *leveldata_role = leveldata_element->Attribute("role");
								data_link.param41 = "role";
								data_link.value41 = leveldata_element->Attribute("role");
							}

						}

					}

				}
		}

	}

	return  data_link;
}

vector<string>	down_XML_to_bytes(string xml_filename) {
	XMLDocument xmlDoc;
	//XMLError eResult = xmlDoc.LoadFile(xml_filename.c_str());
	char file_path[100];
	char *path_dir = "msg_original/";
	const char *filename_ch = xml_filename.c_str();
	strcpy_s(file_path, path_dir);
	strcat(file_path, filename_ch);
	
	XMLError eResult = xmlDoc.LoadFile(file_path);
	XMLCheckResult(eResult);

	// Read the XML file as string and stored in "char *text"
	XMLPrinter printer;
	xmlDoc.Accept(&printer);
	const char *text = printer.CStr();
	int len = strlen(text);
	std::ostringstream stm;
	string str_temp;
	const char *cstr = NULL;
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

	char file_path[100];
	char *path_dir = "msg_generated/";
	const char *filename_ch = xml_filename.c_str();
	strcpy_s(file_path, path_dir);
	strcat(file_path, filename_ch);

	ofstream myfile (file_path);

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
