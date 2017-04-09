#include<iostream>
using namespace std;

class Date
{
public:
	Date setDate();
	void showDate(Date date);
	bool isLeapYear(Date date);
private:	
	int Year;
	int Month;
	int Day;
};

Date::Date setDate(){
	Date date;
	cout<<"";cin<<date.<<endl;
	cout<<"";cin<<date.<<endl;
	cout<<"";cin<<date.<<endl;

	return date; 
}