#include<iostream>
using namespace std;

class Date
{
public:
	Date setDate();
	void showDate(Date date);
	void isLeapYear(Date date);	
	int Year;
	int Month;
	int Day;
};

Date setDate(int Y, int M, int D){
	Date date;
	date.Year = Y;
	date.Month = M;
	date.Day = D;
	return date; 
}

void showDate(Date date){
	cout<<date.Year<<"年"<<date.Month<<"月"<<date.Day<<"日"<<endl;
}

void isLeapYear(int Year){
	bool ifno = Year % 4 == 0 && (Year % 400 == 0 || Year % 100 != 0);
	if (ifno)
		cout<<"是润年."<<endl;
	else
		cout<<"不是闰年."<<endl;
}

int main(int argc, char const *argv[])
{
	int Y,M,D;
	cout<<"输入年份:";cin>>Y;
	cout<<"输入月份:";cin>>M;
	cout<<"输入天数:";cin>>D;
	Date date = setDate(Y,M,D);
	showDate(date);
	isLeapYear(Y);
	return 0;
}
