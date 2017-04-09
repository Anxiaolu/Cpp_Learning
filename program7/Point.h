#include<iostream>
using namespace std;
class Point
{
public:
	Point(float x,float y){
	x_coor = x;
	y_coor = y;
	};
	~Point(){};
	float getX(){return x_coor;}
	float getY(){return y_coor;}
	virtual float area(float r) const;
	friend ostream & operator << (ostream &,Point &); 
private:
	float x_coor;
	float y_coor;
};

ostream & operator << (ostream &output,Point &p){
	output<<"("<<p.x_coor<<","<<p.y_coor<<")"<<endl;
	return output;
}