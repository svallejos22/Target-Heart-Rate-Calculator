#include <iostream>
#include "heartrate.h"
#include <conio.h>
using namespace std;

int main() {

	//Calling default unparameterized constructor
	//initialized values to default settings
	Heartrate heartrate;
	//User defined input
	string firstName, lastName;
	int month, day, year;
	int c_month, c_day, c_year;
	char slash;
	cout << "Enter Your Full Name (First Last): ";
	cin >> firstName >> lastName;
	cout << "Enter Your Date of Birth (mm/dd/yyyy): ";
	cin >> month >> slash >>  day >> slash >> year;
	cout << "Enter Today's Date (mm/dd/yyyy): ";
	cin >> c_month >> slash >> c_day >> slash >> c_year;

	//Calling the default parameterized constructor
	Heartrate my_heartrate(firstName, lastName, month, day, year, c_month, c_day, c_year);
	cout << "Name: " << my_heartrate.getFirstName() << " " << my_heartrate.getLastName() << "\n";
	cout << "DOB: " << my_heartrate.getMonth() << "/" << my_heartrate.getDay() << "/" << my_heartrate.getYear() << "\n";
	cout << "Today's Date: " << c_month << "/" << c_day << "/" << c_year << "\n";
	cout << "Age: " << my_heartrate.getAge() << "\n";
	cout << "Maximum Heart Rate: " << my_heartrate.getMaximumHeartRate() << "\n";
	my_heartrate.getTargetHeartRate();
	return 0;
}