#include <iostream>
#include "heartrate.h"
using namespace std;

//Implementing constructors
Heartrate::Heartrate() {
	_firstName = "unknown";
	_lastName = "unknown";
	_month = 1;
	_day = 1;
	_year = 1900;
	_currentMonth = 1;
	_currentDay = 1;
	_currentYear = 1900;
}
Heartrate::Heartrate(string firstName, string lastName, int month, int day, int year, int c_month, int c_day, int c_year) {
	setFirstName(firstName);
	setLastName(lastName);
	setMonth(month);
	setDay(day);
	setYear(year);
	setCurrentMonth(c_month);
	setCurrentDay(c_day);
	setCurrentYear(c_year);
}
Heartrate::Heartrate(const Heartrate &heartrate) {
	_firstName = heartrate.getFirstName();
	_lastName = heartrate.getLastName();
	_month = heartrate.getMonth();
	_day = heartrate.getDay();
	_year = heartrate.getYear();
	_currentMonth = heartrate.getCurrentMonth();
	_currentDay = heartrate.getCurrentDay();
	_currentYear = heartrate.getCurrentYear();
}
//Implementing Destructor 
Heartrate::~Heartrate() {
}
//Implementing Getters 
string Heartrate::getFirstName() const {
	return _firstName;
}
string Heartrate::getLastName() const {
	return _lastName;
}
int Heartrate::getMonth() const {
	return _month;
}
int Heartrate::getDay() const {
	return _day;
}
int Heartrate::getYear() const {
	return _year;
}
int Heartrate::getCurrentMonth() const {
	return _currentMonth;
}
int Heartrate::getCurrentDay() const {
	return _currentDay;
}
int Heartrate::getCurrentYear() const {
	return _currentYear;
}

//Implementing Setters
void Heartrate::setFirstName(string firstName) {
	_firstName = firstName;
}
void Heartrate::setLastName(string lastName) {
	_lastName = lastName;
}
void Heartrate::setMonth(int month) {
	_month = month;
}
void Heartrate::setDay(int day) {
	_day = day;
}
void Heartrate::setYear(int year) {
	_year = year;
}
void Heartrate::setCurrentMonth(int c_month) {
	_currentMonth = c_month;
}
void Heartrate::setCurrentDay(int c_day) {
	_currentDay = c_day;
}
void Heartrate::setCurrentYear(int c_year) {
	_currentYear = c_year;
}
//Methods
double Heartrate::getAge() {
	int age;
	age = _currentYear - _year;
	if (_currentMonth < _month || _currentDay < _day) {
		age = age - 1;
	}
	return age;
}
double Heartrate::getMaximumHeartRate() {
	return 220 - getAge();
}
void Heartrate::getTargetHeartRate() {
	int low = getMaximumHeartRate() * .50;
	int high = getMaximumHeartRate() * .85;
	cout <<"Target Heart Rate: " << low << "-" << high << "\n";
	return;
}
