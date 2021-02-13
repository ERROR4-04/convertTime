#include <iostream>
#include "TimeHeader.h"
using namespace std;

Time::Time() {
	cout << "\nenter time : " << endl;
	cout << "\nhour ? : ";
	cin >> hour;
	cout << "minute ? : ";
	cin >> minute;
	cout << "seconds ? : ";
	cin >> second;
	setTime(hour, minute, second);
}
void Time::setTime(int h, int m, int s) {
	h = hour;
	m = minute;
	s = second;

	if (h > 24 || h < 00)
		cout << "wrong input , hours must be between 00 and 24\n";

	else if (m > 59 || m < 00)
		cout << "wrong input , munutes must be between 00 and 59\n";
	else if (s > 59 || s < 00)
		cout << "wrong input , seconds must be between 00 and 59\n";
}
void Time::printUniversal() {

	string timezone;
	cout << "enter PM or AM : ";
	cin >> timezone;

	if (timezone == "AM" || timezone == "am") {
		if (hour == 12)
			cout << "the unevirsal time is ,  " << hour - 12 << ":" << minute << ":" << second << " AM " << endl;

		else if (hour < 12 && hour > 0) {

			cout << "the unevirsal time is ,  " << hour << ":" << minute << ":" << second << " AM " << endl;
		}
		else  cout << "wrong input , please enter standard time . \n";
	}

	else if (timezone == "PM" || timezone == "pm") {
		if (hour == 12)
			cout << "the unevirsal time is ,  " << hour << ":" << minute << ":" << second << " PM" << endl;
		else if (hour <= 12 && hour >= 0)
			cout << "the unevirsal time is ,  " << hour + 12 << ":" << minute << ":" << second << " PM" << endl;

		else if (hour > 12 || hour < 0) cout << "wrong input , please enter standard time . \n";

	}

}
void Time::printStandard() {

	if (hour == 12)
		cout << "the standard time is ,  " << hour << ':' << minute << ':' << second << " PM";
	else if (hour >= 12 && hour <= 24) {
		cout << "the standard time is ,  " << hour - 12 << ':' << minute << ':' << second << " PM";
	}
	else if (hour < 12 && hour>00)
		cout << "the time in standard is ,   " << hour << ':' << minute << ':' << second << " AM";
	else if (hour == 0)
		cout << "the time in standard is ,   " << hour + 12 << ':' << minute << ':' << second << " AM";
}