#include <iostream>
#include "TimeHeader.h"
using namespace std;

int main() {
	int choice;
	cout << " chose [1] to convert time to unevirsal or [2] to convert to standard : ";
	cin >> choice;
	Time obj;

	switch (choice) {

	case 1: obj.printUniversal(); break;	

	case 2:obj.printStandard(); break;

	default:cout << " wrong number , please enter 1 or 2";

	}
	return 0;
}