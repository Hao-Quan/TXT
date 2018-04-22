procedure setDataIn
{
   dataLinkIn.FLIGHT_ID_LENGHT.Value = FMS_Executable::aaemInter->host2Datalink->FLIGHT_ID_LENGHT;
   dataLinkIn.FLIGHT_ID_LENGHT.Status = VALID;
   for (int u = 0; u<dataLinkIn.FLIGHT_ID_LENGHT.Value; u++) 
	   dataLinkIn.FLIGHT[u] = FMS_Executable::aaemInter->host2Datalink->FLIGHT[u];
   
       
       
    //TO BE CONTINUE..
}	
	
	
procedure setDataOut
{
	FMS_Executable::aaemInter->fms2DataLink->FLIGHT_ID_LENGHT = dataLinkOut.FLIGHT_ID_LENGHT.Value);
	   for (int u = 0; u<FMS_Executable::aaemInter->fms2DataLink->FLIGHT_ID_LENGH; u++) 
	      FMS_Executable::aaemInter->fms2host->FLIGHT[u] = dataLinkOut.FLIGHT.value[u];
		
	//TO BE CONTINUE...	
}
