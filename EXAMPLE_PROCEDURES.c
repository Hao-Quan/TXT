procedure setDataIn
{
    
   // DATA HEADER
   dataLinkIn.FLIGHT_ID_LENGTH.Value = FMS_Executable::aaemInter->host2Datalink->FLIGHT_ID_LENGTH;
   dataLinkIn.FLIGHT_ID_LENGTH.Status = VALID;
   for (int u = 0; u<dataLinkIn.FLIGHT_ID_LENGTH.Value; u++)
	   dataLinkIn.FLIGHT_ID[u] = FMS_Executable::aaemInter->host2Datalink->FLIGHT_ID[u];
   
   dataLinkIn.DIRECTION.value = FMS_Executable::aaemInter->host2Datalink->DIRECTION;
   dataLinkIn.TIME_STAMP_DATA_YEAR.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_YEAR;
   dataLinkIn.TIME_STAMP_DATA_MONTH.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_MONTH;
   dataLinkIn.TIME_STAMP_DATA_DAY.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_DAY;
   dataLinkIn.TIME_STAMP_DATA_SECOND.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_SECOND;
   dataLinkIn.TIME_STAMP_DATA_MINUTE.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_MINUTE;
   dataLinkIn.TIME_STAMP_DATA_HOUR.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_HOUR;
   dataLinkIn.ID.value = FMS_Executable::aaemInter->host2Datalink->ID;
   
    // DATA PAYLOAD
       
    dataLinkIn.POSITION_TYPE.value = FMS_Executable::aaemInter->host2Datalink->;
    dataLinkIn.POSITION_NAME_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->POSITION_NAME_LENGTH;
    dataLinkIn.POSITION_NAME_LENGTH.status = VALID;
    for (int u = 0; u<dataLinkIn.POSITION_NAME_LENGTH.Value; u++)
       dataLinkIn.POSITION_NAME[u] = FMS_Executable::aaemInter->host2Datalink->POSITION_NAME[u];
       
    dataLinkIn.POSITION_LATITUDE.value = FMS_Executable::aaemInter->host2Datalink->POSITION_LATITUDE;
    dataLinkIn.POSITION_LONGITUDE.value = FMS_Executable::aaemInter->host2Datalink->POSITION_LONGITUDE;
    dataLinkIn.LEVEL_DATA.value = FMS_Executable::aaemInter->host2Datalink->LEVEL_DATA;
    dataLinkIn.RTA_SECOND.value = FMS_Executable::aaemInter->host2Datalink->RTA_SECOND;
    dataLinkIn.RTA_MINUTE.value = FMS_Executable::aaemInter->host2Datalink->RTA_MINUTE;
    dataLinkIn.RTA_HOUR.value = FMS_Executable::aaemInter->host2Datalink->RTA_HOUR;
    dataLinkIn.RTA_TOLLERANCE.value = FMS_Executable::aaemInter->host2Datalink->RTA_TOLLERANCE;
    dataLinkIn.RTA_SECOND_SECOND.value = FMS_Executable::aaemInter->host2Datalink->RTA_SECOND_SECOND;
    dataLinkIn.RTA_SECOND_MINUTE.value = FMS_Executable::aaemInter->host2Datalink->RTA_SECOND_MINUTE;
    dataLinkIn.RTA_SECOND_HOUR.value = FMS_Executable::aaemInter->host2Datalink->RTA_SECOND_HOUR;
    dataLinkIn.RTA_SECOND_TOLLERANCE.value = FMS_Executable::aaemInter->host2Datalink->RTA_SECOND_TOLLERANCE;
    dataLinkIn.SPEED.value = FMS_Executable::aaemInter->host2Datalink->SPEED;
    dataLinkIn.SPEED_SECOND.value = FMS_Executable::aaemInter->host2Datalink->SPEED_SECOND;
    dataLinkIn.DEPARTURE_NAME_PROCEDURE_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_PROCEDURE_LENGTH;
    dataLinkIn.DEPARTURE_NAME_PROCEDURE.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_PROCEDURE;
    for (int u = 0; u<dataLinkIn.DEPARTURE_NAME_PROCEDURE_LENGTH.Value; u++)
            dataLinkIn.DEPARTURE_NAME_PROCEDURE[u] = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_PROCEDURE[u];
        
    dataLinkIn.DEPARTURE_NAME_AIRPORT_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_AIRPORT_LENGTH;
    dataLinkIn.DEPARTURE_NAME_AIRPORT.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_AIRPORT;
    for (int u = 0; u<dataLinkIn.DEPARTURE_NAME_AIRPORT_LENGTH.Value; u++)
            dataLinkIn.DEPARTURE_NAME_AIRPORT[u] = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_AIRPORT[u];
            
        
    dataLinkIn.DEPARTURE_NAME_RWY_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_RWY_LENGTH;
    dataLinkIn.DEPARTURE_NAME_RWY.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_RWY;
    for (int u = 0; u<dataLinkIn.DEPARTURE_NAME_RWY_LENGTH.Value; u++)
            dataLinkIn.DEPARTURE_NAME_RWY[u] = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_RWY[u];
        
    dataLinkIn.DEPARTURE_NAME_TRANS_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_TRANS_LENGTH;
    dataLinkIn.DEPARTURE_NAME_TRANS.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_TRANS;
    for (int u = 0; u<dataLinkIn.DEPARTURE_NAME_TRANS_LENGTH.Value; u++)
            dataLinkIn.DEPARTURE_NAME_TRANS[u] = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_TRANS[u];
        
    dataLinkIn.DEPARTURE_NAME_SID_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_SID_LENGTH;
    dataLinkIn.DEPARTURE_NAME_SID.value = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_SID;
    for (int u = 0; u<dataLinkIn.DEPARTURE_NAME_SID_LENGTH.Value; u++)
            dataLinkIn.DEPARTURE_NAME_SID[u] = FMS_Executable::aaemInter->host2Datalink->DEPARTURE_NAME_SID[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_NUM.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_NUM;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_NUM[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_NUM[u];
        
    dataLinkIn.ROUTE_CLEARANCE_WPT_POS_LAT.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_POS_LAT;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_POS_LAT[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_POS_LAT[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_POS_LONG.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_POS_LONG;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_POS_LONG[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_POS_LONG[u];
            
        
    dataLinkIn.ROUTE_CLEARANCE_WPT_LEVEL_TYPE.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_LEVEL_TYPE;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_LEVEL_TYPE[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_LEVEL_TYPE[u];
    
    dataLinkIn.ROUTE_CLEARANCE_WPT_LEVEL.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_LEVEL;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_LEVEL[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_LEVEL[u];
        
    dataLinkIn.ROUTE_CLEARANCE_WPT_SPEED.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_SPEED;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_SPEED[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_SPEED[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_SECOND.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_SECOND;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_SECOND[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_SECOND[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_MINUTE.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_MINUTE;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_MINUTE[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_MINUTE[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_HOUR.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_HOUR;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_HOUR[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_HOUR[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_TOLERANCE.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_TOLERANCE;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_RTA_TOLERANCE[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_RTA_TOLERANCE[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_DEGREES.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_DEGREES;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_DEGREES[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_DEGREES[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_DEGREES_TYPE[100].value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_DEGREES_TYPE;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_DEGREES_TYPE[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_DEGREES_TYPE[u];
        
    dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_TIME_SECOND.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_TIME_SECOND;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_TIME_SECOND[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_TIME_SECOND[u];
            
    dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_TIME_MINUTE.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_TIME_MINUTE;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_TIME_MINUTE[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_TIME_MINUTE[u];
            
        
    dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_TIME_HOUR.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_TIME_HOUR;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_HOLD_TIME_HOUR[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_HOLD_TIME_HOUR[u];
        
    dataLinkIn.ROUTE_CLEARANCE_WPT_FLY_MODE.value = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_FLY_MODE;
    for (int u = 0; u<100; u++)
            dataLinkIn.ROUTE_CLEARANCE_WPT_FLY_MODE[u] = FMS_Executable::aaemInter->host2Datalink->ROUTE_CLEARANCE_WPT_FLY_MODE[u];
            
    dataLinkIn.ARRIVAL_DATA_PROCEDURE_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_PROCEDURE_LENGTH;
    dataLinkIn.ARRIVAL_DATA_PROCEDURE_LENGTH.staus = VALID;
    for (int u = 0; u<dataLinkIn.ARRIVAL_DATA_PROCEDURE_LENGTH.Value; u++)
            dataLinkIn.ARRIVAL_DATA_PROCEDURE[u] = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_PROCEDURE[u];
        
    dataLinkIn.ARRIVAL_DATA_AIRPORT_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_AIRPORT_LENGTH;
    dataLinkIn.ARRIVAL_DATA_AIRPORT_LENGTH.status = VALID;
    for (int u = 0; u<dataLinkIn.ARRIVAL_DATA_AIRPORT_LENGTH.Value; u++)
            dataLinkIn.ARRIVAL_DATA_AIRPORT[u] = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_AIRPORT[u];
        
    dataLinkIn.ARRIVAL_DATA_RWY_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_RWY_LENGTH;
    dataLinkIn.ARRIVAL_DATA_RWY_LENGTH.status = VALID;
    for (int u = 0; u<dataLinkIn.ARRIVAL_DATA_RWY_LENGTH.Value; u++)
            dataLinkIn.ARRIVAL_DATA_RWY[u] = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_RWY[u];
        
    dataLinkIn.ARRIVAL_DATA_APPROACH_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_APPROACH_LENGTH;
    dataLinkIn.ARRIVAL_DATA_APPROACH_LENGTH.status = VALID;
    for (int u = 0; u<dataLinkIn.ARRIVAL_DATA_APPROACH_LENGTH.Value; u++)
            dataLinkIn.ARRIVAL_DATA_APPROACH[u] = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_APPROACH[u];
        
    dataLinkIn.ARRIVAL_DATA_APPROACH_TRANS_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_APPROACH_TRANS_LENGTH;
    dataLinkIn.ARRIVAL_DATA_APPROACH_TRANS_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_APPROACH_TRANS;
    for (int u = 0; u<dataLinkIn.ARRIVAL_DATA_APPROACH_TRANS_LENGTH.Value; u++)
            dataLinkIn.ARRIVAL_DATA_APPROACH_TRANS[u] = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_APPROACH_TRANS[u];
        
    dataLinkIn.ARRIVAL_DATA_STAR_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_STAR_LENGTH;
    dataLinkIn.ARRIVAL_DATA_STAR.status = VALID;
    for (int u = 0; u<dataLinkIn.ARRIVAL_DATA_STAR_LENGTH.Value; u++)
            dataLinkIn.ARRIVAL_DATA_STAR[u] = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_STAR[u];
        
        
    dataLinkIn.ARRIVAL_DATA_STAR_TRANS_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_STAR_TRANS_LENGTH;
    dataLinkIn.ARRIVAL_DATA_STAR_TRANS.status = VALID;
    for (int u = 0; u<dataLinkIn.ARRIVAL_DATA_STAR_TRANS_LENGTH.Value; u++)
            dataLinkIn.ARRIVAL_DATA_STAR_TRANS[u] = FMS_Executable::aaemInter->host2Datalink->ARRIVAL_DATA_STAR_TRANS[u];
            
        
        
    dataLinkIn.LATERAL_DEVIATION_SIDE.value = FMS_Executable::aaemInter->host2Datalink->LATERAL_DEVIATION_SIDE;
    dataLinkIn.LATERAL_DEVIATION_DISTANCE.value = FMS_Executable::aaemInter->host2Datalink->LATERAL_DEVIATION_DISTANCE;
    dataLinkIn.FLIGHT_PHASE.value = FMS_Executable::aaemInter->host2Datalink->FLIGHT_PHASE;
    dataLinkIn.REVISION_REASON_1.value = FMS_Executable::aaemInter->host2Datalink->REVISION_REASON_1;
    dataLinkIn.REVISION_REASON_2.value = FMS_Executable::aaemInter->host2Datalink->REVISION_REASON_2;
        
    dataLinkIn.FREE_TEXT_MESSAGE_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->FREE_TEXT_MESSAGE_LENGTH;
    dataLinkIn.FREE_TEXT_MESSAGE.status = VALID;
    for (int u = 0; u<dataLinkIn.FREE_TEXT_MESSAGE_LENGTH.Value; u++)
            dataLinkIn.FREE_TEXT_MESSAGE[u] = FMS_Executable::aaemInter->host2Datalink->FREE_TEXT_MESSAGE[u];
        
}

procedure setDataIn_Taxi {
    // DATA HEADER
    dataLinkIn.FLIGHT_ID_LENGTH.Value = FMS_Executable::aaemInter->host2Datalink->FLIGHT_ID_LENGTH;
    dataLinkIn.FLIGHT_ID_LENGTH.Status = VALID;
    for (int u = 0; u<dataLinkIn.FLIGHT_ID_LENGTH.Value; u++)
        dataLinkIn.FLIGHT_ID[u] = FMS_Executable::aaemInter->host2Datalink->FLIGHT_ID[u];
        
    dataLinkIn.DIRECTION.value = FMS_Executable::aaemInter->host2Datalink->DIRECTION;
    dataLinkIn.TIME_STAMP_DATA_YEAR.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_YEAR;
    dataLinkIn.TIME_STAMP_DATA_MONTH.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_MONTH;
    dataLinkIn.TIME_STAMP_DATA_DAY.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_DAY;
    dataLinkIn.TIME_STAMP_DATA_SECOND.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_SECOND;
    dataLinkIn.TIME_STAMP_DATA_MINUTE.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_MINUTE;
    dataLinkIn.TIME_STAMP_DATA_HOUR.value = FMS_Executable::aaemInter->host2Datalink->TIME_STAMP_DATA_HOUR;
    dataLinkIn.ID.value = FMS_Executable::aaemInter->host2Datalink->ID;
        
    // DATA PAYLOAD
    dataLinkIn.FREE_TEXT_MESSAGE_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->FLIGHT_ID_LENGTH;
    dataLinkIn.FREE_TEXT_MESSAGE_LENGTH.Status = VALID;
    for (int u = 0; u<dataLinkIn.FREE_TEXT_MESSAGE_LENGTH.Value; u++)
        dataLinkIn.FREE_TEXT_MESSAGE[u] = FMS_Executable::aaemInter->host2Datalink->FREE_TEXT_MESSAGE[u];
    
    dataLinkIn.REVISION_REASON.value = FMS_Executable::aaemInter->host2Datalink->REVISION_REASON;
    dataLinkIn.CLEARANCE_TYPE_R.value = FMS_Executable::aaemInter->host2Datalink->CLEARANCE_TYPE_R;
    dataLinkIn.ASSIGNED_TIME_PERFORM.value = FMS_Executable::aaemInter->host2Datalink->ASSIGNED_TIME_PERFORM;
    dataLinkIn.ASSIGNED_TIME_TYPE.value = FMS_Executable::aaemInter->host2Datalink->ASSIGNED_TIME_TYPE;
    dataLinkIn.ASSIGNED_TIME_SECOND.value = FMS_Executable::aaemInter->host2Datalink->ASSIGNED_TIME_SECOND;
    dataLinkIn.ASSIGNED_TIME_MINUTE.value = FMS_Executable::aaemInter->host2Datalink->ASSIGNED_TIME_MINUTE;
    dataLinkIn.ASSIGNED_TIME_HOUR.value = FMS_Executable::aaemInter->host2Datalink->ASSIGNED_TIME_HOUR;
    dataLinkIn.PUSH_BACK_DIRECTION.value = FMS_Executable::aaemInter->host2Datalink->PUSH_BACK_DIRECTION;
            
    dataLinkIn.PUSH_BACK_POSITION_FROM_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->PUSH_BACK_POSITION_FROM_LENGTH;
    for (int u = 0; u<dataLinkIn.PUSH_BACK_POSITION_FROM_LENGTH.Value; u++)
        dataLinkIn.PUSH_BACK_POSITION_FROM[u] = FMS_Executable::aaemInter->host2Datalink->PUSH_BACK_POSITION_FROM[u];
    
    dataLinkIn.PUSH_BACK_POSITION_TO_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->PUSH_BACK_POSITION_TO_LENGTH;
    for (int u = 0; u<dataLinkIn.PUSH_BACK_POSITION_TO_LENGTH.Value; u++)
        dataLinkIn.PUSH_BACK_POSITION_TO[u] = FMS_Executable::aaemInter->host2Datalink->PUSH_BACK_POSITION_TO[u];
    
    for (int u = 0; u<100.Value; u++)
        dataLinkIn.TAXI_ROUTE_LENGTH[u] = FMS_Executable::aaemInter->host2Datalink->TAXI_ROUTE_LENGTH[u];
    
    dataLinkIn.TAXI_ROUTE_NAME_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->TAXI_ROUTE_NAME_LENGTH;
    for (int u = 0; u<dataLinkIn.TAXI_ROUTE_NAME_LENGTH.Value; u++)
        dataLinkIn.TAXI_ROUTE_NAME[u] = FMS_Executable::aaemInter->host2Datalink->TAXI_ROUTE_NAME[u];
        
    for (int u = 0; u<100.Value; u++)
        dataLinkIn.TAXI_ROUTE_TYPE[u] = FMS_Executable::aaemInter->host2Datalink->TAXI_ROUTE_TYPE[u];
   
    dataLinkIn.TAXI_DURATION.value = FMS_Executable::aaemInter->host2Datalink->TAXI_DURATION;
    dataLinkIn.TAXI_RESUME_CONDITION.value = FMS_Executable::aaemInter->host2Datalink->TAXI_RESUME_CONDITION;
    dataLinkIn.GROUND_LOCATION_TYPE.value = FMS_Executable::aaemInter->host2Datalink->GROUND_LOCATION_TYPE;

    dataLinkIn.GROUND_LOCATION_NAME_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->GROUND_LOCATION_NAME_LENGTH;
    for (int u = 0; u<dataLinkIn.PUSH_BACK_POSITION_FROM_LENGTH.Value; u++)
        dataLinkIn.GROUND_LOCATION_NAME[u] = FMS_Executable::aaemInter->host2Datalink->GROUND_LOCATION_NAME[u];
        
    dataLinkIn.GROUND_LOCATION_LATITUDE.value = FMS_Executable::aaemInter->host2Datalink->GROUND_LOCATION_LATITUDE;
    dataLinkIn.GROUND_LOCATION_LONGITUDE.value = FMS_Executable::aaemInter->host2Datalink->GROUND_LOCATION_LONGITUDE;
    
    dataLinkIn.RUNWAY_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->RUNWAY_LENGTH;
    for (int u = 0; u<dataLinkIn.RUNWAY_LENGTH.Value; u++)
        dataLinkIn.RUNWAY[u] = FMS_Executable::aaemInter->host2Datalink->RUNWAY[u];
    
    dataLinkIn.DISTANCE_GROUND.value = FMS_Executable::aaemInter->host2Datalink->DISTANCE_GROUND;
    dataLinkIn.INTERSECTION_TYPE.value = FMS_Executable::aaemInter->host2Datalink->INTERSECTION_TYPE;
    
    dataLinkIn.INTERSECTION_NAME_LENGTH.value = FMS_Executable::aaemInter->host2Datalink->INTERSECTION_NAME_LENGTH;
    for (int u = 0; u<dataLinkIn.INTERSECTION_NAME_LENGTH.Value; u++)
        dataLinkIn.INTERSECTION_NAME[u] = FMS_Executable::aaemInter->host2Datalink->INTERSECTION_NAME[u];
    
}
	
	
procedure setDataOut
{
    // DATA HEADER
	FMS_Executable::aaemInter->fms2DataLink->FLIGHT_ID_LENGTH = dataLinkOut.FLIGHT_ID_LENGTH.Value;
    for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->FLIGHT_ID_LENGTH; u++)
       FMS_Executable::aaemInter->fms2host->FLIGHT[u] = dataLinkOut.FLIGHT.value[u];
		
    FMS_Executable::aaemInter->fms2DataLink->DIRECTION = dataLinkOut.DIRECTION.Value;
    FMS_Executable::aaemInter->fms2DataLink->TIME_STAMP_DATA_YEAR = dataLinkOut.TIME_STAMP_DATA_YEAR.Value;
    FMS_Executable::aaemInter->fms2DataLink->TIME_STAMP_DATA_MONTH = dataLinkOut.TIME_STAMP_DATA_MONTH.Value;
    FMS_Executable::aaemInter->fms2DataLink->TIME_STAMP_DATA_DAY = dataLinkOut.TIME_STAMP_DATA_DAY.Value;
    FMS_Executable::aaemInter->fms2DataLink->TIME_STAMP_DATA_SECOND = dataLinkOut.TIME_STAMP_DATA_SECOND.Value;
    FMS_Executable::aaemInter->fms2DataLink->TIME_STAMP_DATA_MINUTE = dataLinkOut.TIME_STAMP_DATA_MINUTE.Value;
    FMS_Executable::aaemInter->fms2DataLink->TIME_STAMP_DATA_HOUR = dataLinkOut.TIME_STAMP_DATA_HOUR.Value;
    FMS_Executable::aaemInter->fms2DataLink->ID = dataLinkOut.ID.Value;
        
    // DATA PAYLOAD
    FMS_Executable::aaemInter->fms2DataLink->INSTRUCTION_NAME_TYPE = dataLinkOut.INSTRUCTION_NAME_TYPE.Value;
        
    FMS_Executable::aaemInter->fms2DataLink->INSTRUCTION_NAME_LENGTH = dataLinkOut.INSTRUCTION_NAME_LENGTH.Value;
    for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->INSTRUCTION_NAME_LENGTH; u++)
        FMS_Executable::aaemInter->fms2host->INSTRUCTION_NAME[u] = dataLinkOut.FLIGHT.INSTRUCTION_NAME[u];
        
    FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_PROCEDURE_LENGTH = dataLinkOut.DEPARTURE_DATA_PROCEDURE_LENGTH.Value;
    for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_PROCEDURE_LENGTH; u++)
        FMS_Executable::aaemInter->fms2host->DEPARTURE_DATA_PROCEDURE[u] = dataLinkOut.FLIGHT.DEPARTURE_DATA_PROCEDURE[u];

    FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_AIRPORT_LENGTH = dataLinkOut.DEPARTURE_DATA_AIRPORT_LENGTH.Value;
    for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_AIRPORT_LENGTH; u++)
        FMS_Executable::aaemInter->fms2host->DEPARTURE_DATA_AIRPORT[u] = dataLinkOut.FLIGHT.DEPARTURE_DATA_AIRPORT[u];
        
    FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_RWY_LENGTH = dataLinkOut.DEPARTURE_DATA_RWY_LENGTH.Value;
    for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_AIRPORT_LENGTH; u++)
        FMS_Executable::aaemInter->fms2host->DEPARTURE_DATA_RWY[u] = dataLinkOut.FLIGHT.DEPARTURE_DATA_RWY[u];
    
    FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_SID_LENGTH = dataLinkOut.DEPARTURE_DATA_SID_LENGTH.Value;
    for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->DEPARTURE_DATA_AIRPORT_LENGTH; u++)
        FMS_Executable::aaemInter->fms2host->DEPARTURE_DATA_RWY[u] = dataLinkOut.FLIGHT.DEPARTURE_DATA_RWY[u];
    
	//TO BE CONTINUE...	
}
