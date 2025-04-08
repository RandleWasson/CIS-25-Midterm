#include <iostream>
using namespace std;

bool isLeapYear(int year) {
	// Check if the year is divisible by 4 and either not divisible by 100 or divisible by 400
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
	int year;

	// Prompt user for input
	cout << "Enter a year: ";
	cin >> year;

	// Check if the year is a Leap year
	if (isLeapYear(year)) {
		cout << year << " is a leap year." << endl;
	}
	else {
		cout << year << " is not a leap year." << endl;
	}

	return 0;
}