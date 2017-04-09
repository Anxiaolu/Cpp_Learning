#include<iostream>
using namespace std;
class Date
{
public:
	Date(int Year = 2000,int Month = 1,int Day = 1);
	~Date(){
		cout<<"调用了析构函数!"<<endl;
	};
	void showDate(){
	cout<<"您输入的时间为："<<Year<<"年"<<Month<<"月"
		<<Day<<"日"<<endl;
};
private:
	int Year;
	int Month;
	int Day;
};

Date::Date(int Y,int M,int D):Year(Y),Month(M),Day(D){}

int main()
{
	Date daten[3] = {
		Date(),
		Date(2015,12,3),
		Date(2015,12,4)
	};	
	for (int i = 0; i < 3; i++)
	{
		/* code */	
		daten[i].showDate();
	}
	return 0;
}