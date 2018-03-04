typedef struct {
char* flight_id;
//	char* icao_24_bit;
//	char* tail_number;
char* logged_at;
} Stdatts;	//p51

enum Units {feet, metres, flightLevel, metricFlightLevel};
enum Role {current, waypoint};

typedef struct {
	Units units;
	Role role;
} Leveldata_ATTR;	//p52

typedef struct {
	char* PCDATA;	// Leveldata_ELE = 300
	Leveldata_ATTR leveldata_ATTR;
} Leveldata;	// p52

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
} Level;	//p52


typedef struct {
	Level	level;
	//Time
	//Position
} Msg_element_ELE; //p55

typedef struct {
	char *id;
	Level	level;
	//Time
	//Position
} Msg_element_ATTR; //p55

typedef struct {
	Msg_element_ELE	msg_element_ELE;
	Msg_element_ATTR msg_element_ATTR;
} Msg_element;	//p55, p51

typedef struct {
	//char *msg_id;
	const char *date;
	const char *time;
} Header;	//p56

typedef struct {
	Header header;
	Msg_element msg_element;
} Cpdlc_message_ELE;

//p51
enum Direction {down, up};

typedef struct {
	const char* flight_id;
	//	char* icao_24_bit;
	//	char* tail_number;
	const char* logged_at;
	int direct;
	//enum direction {up, down};
}Cpdlc_message_ATTR;	//p54

typedef struct {
	Header header;
	Msg_element msg_element;
} Message;	//p52

typedef struct {
	Message	cpdlc_msg_ELE;
	Cpdlc_message_ATTR cpdlc_msg_ATTR;
} Cpdlc_message;	//p54, p52

void to_XML(Cpdlc_message msg);
