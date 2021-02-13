#pragma once
class Time {

public:

	Time(); // constructor   

	void setTime(int, int, int); // set hour, minute and second 

	void printUniversal(); // print time in universal-time format 24 Hour Clock (0 to 23) 

	void printStandard(); // print time in standard-time format 12 Hour Clock AM/PM (1 to 12)

private:

	int hour; // 0 - 23 (24-hour clock format)   

	int minute; // 0 - 59 

	int second; // 0 - 59

}; // end class Time


