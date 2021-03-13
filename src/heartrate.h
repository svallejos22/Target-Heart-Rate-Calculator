#include <iostream>
using namespace std;

class Heartrate {
private:
	//Attributes
	string _firstName;
	string _lastName;
	int _month;
	int _day;
	int _year;
	int _currentMonth;
	int _currentDay;
	int _currentYear;
public:

	//Unparameterized default constructor
	Heartrate();
	//Parameterized default constructor
	Heartrate(string firstName, string lastName, int month, int day, int year, int c_month, int c_day, int c_year);
	//Copy Constructor
	Heartrate(const Heartrate &heartrate);
	//Destructor
	~Heartrate();
	//Getters (Method)
	string getFirstName() const;
	string getLastName() const;
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	int getCurrentMonth() const;
	int getCurrentDay() const;
	int getCurrentYear() const;
	//Setters
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);
	void setCurrentMonth(int currentMonth);
	void setCurrentDay(int currentDay);
	void setCurrentYear(int currentYear);
	//Methods
	double getAge();
	double getMaximumHeartRate();
	void getTargetHeartRate();
};