//
//  TXT_DOWNLINK_DATA_4D.h
//  
//
//  Created by Hao Quan on 2018/4/22.
//

#ifndef TXT_DOWNLINK_DATA_4D_h
#define TXT_DOWNLINK_DATA_4D_h

#include <stdint.h>


#ifndef __cplusplus
#ifndef bool
#define bool uint32_t
#endif
#endif

#define TXT_INPUT_DATA_VERSION 12

#if defined (_MSC_VER) || defined (__MINGW32__)
#define __attribute__(x)
#pragma pack(push)
#pragma pack(1)
#endif


// Downlink- DTAXI


typedef struct __attribute__((packed)) // This struct will be repeated 1 times in memory
{
    //DATA HEADER
    int32_t FLIGHT_ID_LENGTH;
    char FLIGHT_ID[FLIGHT_ID_LENGTH];
    int32_t DIRECTION;
    int32_t TIME_STAMP_DATA_YEAR;
    int32_t TIME_STAMP_DATA_MONTH;
    int32_t TIME_STAMP_DATA_DAY;
    int32_t TIME_STAMP_DATA_SECOND;
    int32_t TIME_STAMP_DATA_MINUTE;
    int32_t TIME_STAMP_DATA_HOUR;
    int32_t ID;
    
    // DATA PAYLOAD
    int32_t INTERSECTION_TYPE;
    int32_t INTERSECTION_NAME_LENGTH;
    char INTERSECTION_NAME[INTERSECTION_NAME_LENGTH];
    int32_t RUNWAY_NAME_LENGTH;
    int32_t RUNWAY_NAME[RUNWAY_NAME_LENGTH];
    int32_t CLEARANCE_TYPE_R;
    int32_t ASSIGNED_TIME_PERFORM;
    int32_t ASSIGNED_TIME_SECOND;
    int32_t ASSIGNED_TIME_MINUTE;
    int32_t ASSIGNED_TIME_HOUR;
    int32_t PUSH_BACK_POSITION_FROM_LENGTH;
    char PUSH_BACK_POSITION_FROM[PUSH_BACK_POSITION_FROM_LENGTH];
    int32_t PUSH_BACK_POSITION_TO_LENGTH;
    char PUSH_BACK_POSITION_TO[PUSH_BACK_POSITION_TO_LENGTH];
    int32_t GROUND_LOCATION_NAME_LENGTH;
    char GROUND_LOCATION_NAME[GROUND_LOCATION_NAME_LENGTH];
    float GROUND_LOCATION_LATITUDE;
    float GROUND_LOCATION_LONGITUDE;
    int32_t TAXI_REQUEST_POSITION_NAME_LENGTH;
    char TAXI_REQUEST_POSITION_NAME[TAXI_REQUEST_POSITION_NAME_LENGTH];
    int32_t TAXI_REQUEST_ATIS_CODE;
    
    //TO BE CONTINUE...
    
} TXT_DOWNLINK_TAXI_DATA_TYPE;


#if defined (_MSC_VER) || defined (__MINGW32__)
#pragma pack(pop)
#endif


#endif /* TXT_DOWNLINK_DATA_4D_h */
