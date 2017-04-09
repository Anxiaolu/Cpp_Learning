#include<iostream>
#include<string>
using namespace std;

struct Worker
{
	string name;
	char sex;
	int Age;
	char Address;
	string isMarried;
	int MonthlySalary;
	int bonus; 
};

Worker setWorker(){
	Worker worker;
	cout<<"name"<<endl;cin>>worker.name;
	cout<<"sex"<<endl;cin>>worker.sex;
	cout<<"Age"<<endl;cin>>worker.Age;
	cout<<"Address"<<endl;cin>>worker.Address;
	cout<<"isMarried"<<endl;cin>>worker.isMarried;
	cout<<"MonthlySalary"<<endl;cin>>worker.MonthlySalary;
	cout<<"bonus"<<endl;cin>>worker.bonus;
	return worker;
}

void calYearlySalary(Worker worker){
	cout<<"年终收入:"<<worker.MonthlySalary*12 + worker.bonus<<endl;
}

void showWorker(Worker worker){
	cout<<"工人:"<<worker.name<<",性别:"<<worker.sex<<",年龄:"
		<<worker.Age<<",家庭住址:"<<worker.Address<<",是否结婚:"<<worker.isMarried<<",月基本工资:"
		<<worker.MonthlySalary<<",年终奖金:"<<worker.bonus<<endl;
}

int main()
{
	Worker workers[3];

	for (int i = 0; i < 3; i++)
	{
		workers[i] = setWorker();
		showWorker(workers[i]);
		calYearlySalary(workers[i]);
	}
	return 0;
}
