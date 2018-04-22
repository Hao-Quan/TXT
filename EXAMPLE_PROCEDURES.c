procedure setDataIn
{
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
            
       
    //TO BE CONTINUE..
}	
	
	
procedure setDataOut
{
	FMS_Executable::aaemInter->fms2DataLink->FLIGHT_ID_LENGHT = dataLinkOut.FLIGHT_ID_LENGHT.Value);
	   for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->FLIGHT_ID_LENGH; u++) 
	      FMS_Executable::aaemInter->fms2host->FLIGHT[u] = dataLinkOut.FLIGHT.value[u];
		
	//TO BE CONTINUE...	
}
