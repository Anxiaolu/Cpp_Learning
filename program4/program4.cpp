	#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	Student(int s_id,string n,int s){
		sid = s_id;
		name = n;
		score = s;
	};
	~Student(){
		cout<<"调用了析构函数!"<<endl;
	};
	void setSid(int id){sid = id;};
	int getSid(){return sid;};
	void setName(string n){name = n;};
	string getName(){return name;};
	void setScore(int s){score = s;};
	int getScore(){return score;};
private:
	int sid;
	string name;
	int score;
};

void Mini(Student *student){
	Student min = *student;
	student++;
	for (int i = 0; i < 5; ++i)
	{
		if (student->getScore() < min.getScore())
		{
			min.setScore(student->getScore());
			student++;
		}
	}
	cout<<"成绩最低者学号为:"<<min.getSid()<<"姓名:"<<min.getName()<<"分数为:"<<min.getScore()<<endl;
}

int main()
{	
	Student students[5] = {
		Student(1,"gao",90),
		Student(2,"hao",91),
		Student(3,"nao",92),
		Student(4,"qao",93),
		Student(5,"rao",94),
	};
	Student *stu;
	stu = &students[0];
	Mini(stu);	
	return 0;
}
