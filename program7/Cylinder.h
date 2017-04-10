#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;
class Cylinder:public Circle
{
public:
	Cylinder(float x,float y,float r,float h):Circle(x,y,r){height=h;}
	~Cylinder(){};
	void setHeight(float);
	float getHeight();
	virtual float area();
	friend ostream& operator << (ostream &,Cylinder &);
private:
	float height;
};

float Cylinder::area(){
	return 2 * Circle::area() + 2 * 3.14 * getRadius() * height;
}

float Cylinder::getHeight(){
	return height;
}

void Cylinder::setHeight(float h){
	height = h;
}

ostream &operator <<(ostream &output,Cylinder &c){
	output<<"Center=["<<c.getX()<<","<<c.getX()<<"]"<<" r="<<c.getRadius()<<
	" area="<<c.area()<<" height="<<c.height<<endl;
}

#endif
