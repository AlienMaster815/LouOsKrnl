#include <LouAPI.h>

LOUSTATUS InitHPET();
uint64_t calibrate_tsc();

void SetTSCFrequency(uint64_t Frequency);
uint64_t GetTscMaster();
void SetTSC();

static inline uint64_t read_tsc(void) {
    uint32_t lo, hi;
    asm volatile("rdtsc" : "=a"(lo), "=d"(hi));
    return ((uint64_t)hi << 32) | lo;
}

LOUSTATUS SetUpTimers() {
	LOUSTATUS Status = LOUSTATUS_GOOD;

	//Start With the Most Reliable And Work From There


	//if (LOUSTATUS_GOOD != InitHPET()) {
		//if no hpet use tsc
		//LouPrint("HPET Not Found Using TSC\n");
		
		uint64_t TSC_Ticks = 0;
		while(TSC_Ticks == 0){
		TSC_Ticks = calibrate_tsc();
		}
		LouPrint("TSC Ticks Are:%d\n",TSC_Ticks);

		SetTSCFrequency(TSC_Ticks);
		SetTSC();
	//}

	

	return Status;
}

// Function to get the current time in milliseconds using TSC
uint64_t GetCurrentTimeInMilliseconds() {
    // Read the current TSC value
    uint64_t current_tsc = read_tsc();
    
    // Get the calibrated TSC frequency
    uint64_t tsc_frequency = GetTscMaster();
    
    // Convert TSC ticks to milliseconds
    uint64_t time_in_milliseconds = (current_tsc * 1000) / tsc_frequency;
    
    return time_in_milliseconds;
}

int is_leap_year(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}


void LouKeGetTime(
    PTIME_T TimeStruct
){
    if (TimeStruct == NULL) {
        return; // Handle null pointer case
    }

    uint64_t TimeMS = GetCurrentTimeInMilliseconds();

    // Extract milliseconds
    TimeStruct->MilliSeconds = TimeMS % 1000;
    TimeMS /= 1000; // Convert to seconds

    // Calculate seconds, minutes, and hours
    TimeStruct->Second = TimeMS % 60;
    TimeMS /= 60; // Convert to minutes
    TimeStruct->Minute = TimeMS % 60;
    TimeMS /= 60; // Convert to hours
    TimeStruct->Hour = TimeMS % 24;
    TimeMS /= 24; // Convert to days

    // Calculate year, month, and day
    // Unix epoch time starts on January 1, 1970
    int days_since_epoch = (int)TimeMS;
    int year = 1970;

    // Calculate the year
    while (1) {
        int days_in_year = is_leap_year(year) ? 366 : 365;
        if (days_since_epoch >= days_in_year) {
            days_since_epoch -= days_in_year;
            year++;
        } else {
            break;
        }
    }

    // Calculate the month and day
    int month = 0;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_in_month_leap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (1) {
        int days_in_current_month = is_leap_year(year) ? days_in_month_leap[month] : days_in_month[month];
        if (days_since_epoch >= days_in_current_month) {
            days_since_epoch -= days_in_current_month;
            month++;
        } else {
            break;
        }
    }

    TimeStruct->Month = month + 1; // Month is zero-based
    TimeStruct->Day = days_since_epoch + 1; // Day is one-based
}