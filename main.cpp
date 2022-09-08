#include <iostream>
using namespace std;

#include "read_st_task_duration_st.h"
#include "mintes_to_seconds_st.h"
#include "mintes_to_seconds_int.h"
#include "hours_to_minutes_st.h"
#include "hours_to_minutes.h"
#include "days_to_hours_st.h"
#include "days_to_hours.h"
#include "result_task_duration_in_seconds.h"

#include "print_shapes.h"
#include "print_number_float_with_double_msg.h"
#include "print_number_int_with_double_msg.h"

//#include "st_task_duration.h"

/*
    * Calculate the task duration in seconds
        * Read : days, hours, minutes, seconds ==> struct
        *               2,      5,    ,     45,         35      = 193,535
        
         # Steps
            - struct , days, hours, minuts, seconds //? Done
            - ReadStruct                                          //? Done
            -  HoursToMinutes()
            
            
            -  DaysToHours()                                //? Done
            -  DaysToMinutes()
            
            -  MinutesToSeconds(int minutes)                           //? Done
            -  HoursToSeconds(int hours)
            -  DaysToSecondes(int days)
           
            - PrintTimeDurationInSeconds()
*/

int main(){

    // Reading ReadStTaskDurationReadStTaskDuration
    stTaskDuration st_TaskDuration = ReadStTaskDurationSt();
    
    // Decoration 
    PrintShapes(30,'*');

    // Seconds 
    PrintNumberIntWithDoubleMsg("Seconds = ",st_TaskDuration.seconds ,".");

    // Minutes ==> seconds | Read Minutes from struct 
    int minutuesToSeconds =  MinutesToSecondsSt(st_TaskDuration);
    PrintNumberIntWithDoubleMsg("Minutes To Seconds = " ,minutuesToSeconds, " seconds.");

    // Hours ==> minutes | Read hours from struct
    int hoursToMinutes= HoursToMinutesSt(st_TaskDuration);
    //PrintNumberIntWithDoubleMsg("Hours = ", hoursToMinutes, " minutes.");
    int hoursToSeconds = MinutesToSecondsInt(hoursToMinutes);
    PrintNumberIntWithDoubleMsg("Hours To Seconds = ", hoursToSeconds, " seconds");

    // Days ==> hours | Read days from struct
     int daysToHours =  DaysToHoursSt(st_TaskDuration);
    //PrintNumberIntWithDoubleMsg("Days = ",daysToHours, " hours.");
    int hoursToMinutes2 =  HoursToMinutes(daysToHours);
    int daysToSeconds =  MinutesToSecondsInt(hoursToMinutes2);
    PrintNumberIntWithDoubleMsg("Days To Seconds = ",daysToSeconds, " seconds");

    //Result
    float Result = ResultTaskDurationInSeconds(st_TaskDuration.seconds, minutuesToSeconds, hoursToSeconds, daysToSeconds );  

    // Decoration 
    PrintShapes(30,'*');

    // Print Resutl 
    PrintNumberFloatWithDoublMsg("Task Duration = ",Result , " seconds.");
    
    return 0;
}