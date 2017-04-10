#ifndef CYLCLE_H
#define CYLCLE_H
#include <iostream>
#include "Point.h"
using namespace std;
class Circle:public Point
{
public:
	Circle(float x = 0,float y=0,float r=0):Point(x,y){radius=r;};
	//virtual float area(float r) const;
	void setRadius(float r);
	float getRadius();
	virtual float area();
	friend ostream & operator <<(ostream &,Circle &);
private:
	float radius;
};

void Circle::setRadius(float r){radius=r;}
float Circle::getRadius(){return radius;}
float Circle::area(){
	return 3.14*radius*radius;
}
ostream & operator << (ostream & output, Circle & c){
	output<<"Center=["<<c.getX()<<","<<c.getY()<<"]"<<"radius="<<c.radius<<"area="<<c.area()<<endl;
}

#endif