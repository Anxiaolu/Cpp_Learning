#include<iostream>
#include "Circle.h"
using namespace std;
class Cylinder:public Circle
{
public:
	Cylinder(float x,float y,float r,float h):Circle(x,y,r){radius=r;}
	~Cylinder(){};
	void setHeight(float);
	float getHeight();
	virtual float area();
	friend ostream& operator << (ostream &,Cylinder &);
private:
	float height;
};

float Cylinder::area(){
	return 2 * Circle::area() + 2 * 3.14 * radius * height;
}

float Cylinder::getHeight(){
	return height;
}

void Cylinder::setHeight(float h){
	height = h;
}

ostream &operator <<(ostream &output,Cylinder &c){
	output<<"Center=["<<c.x_coor<<","<<c.y_coor<<"]"<<" r="<<c.radius<<
	" area="<<c.area()<<" height="<<c.height<<endl;
}
