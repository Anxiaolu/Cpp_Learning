#include<iostream>
#include<string>
using namespace std;
class Teacher
{
public:
	Teacher(string nam,int ag,string se, string add,string T,string t){
		name = nam;
		Age = ag;
		sex = se;
		Address = add;
		Tel = T;
		title = t;
	};
	~Teacher(){};
	void display(){
		cout<<"name:"<<name<<endl;
		cout<<"Age:"<<Age<<endl;
		cout<<"sex:"<<sex<<endl;
		cout<<"Address:"<<Address<<endl;
		cout<<"Tel:"<<Tel<<endl;
		cout<<"title:"<<title<<endl;
	};
private:
	string name;
	int Age;
	string sex;
	string Address;
	string Tel;
	string title;
};

class Cadre
{
public:
	Cadre(string nam,int ag,string se, string add,string T,string p){
		name1 = nam;
		Age1 = ag;
		sex1 = se;
		Address1 = add;
		Tel1 = T;
		post = p;
	};
	~Cadre(){};
	string getPost(){return post;};
protected:
	string name1;
	int Age1;
	string sex1;
	string Address1;
	string Tel1;
	string post;
};


class Tea_cad:public Teacher,public Cadre
{
public:
	Tea_cad(string nam,int ag,string se, string add,string T,string t,string p,int w):
	Teacher(nam,ag,se,add,T,t),Cadre(nam,ag,se,add,T,p),wage(w){};
	~Tea_cad(){};
	int getWage(){return wage;};
private:
	int wage;
};

int main(int argc, char const *argv[])
{
	Tea_cad tc("lsadi",10,"nan","Address","15616","Teacher","",20);
	Teacher *t;
	t = &tc;
	t->display();
	Cadre *c;
	c = &tc;
	cout<<c->getPost()<<tc.getWage()<<endl;
	return 0;
}