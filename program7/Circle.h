#include<iostream>
#include "Point.h"
using namespace std;
class Circle:public Point
{
public:
	Circle(float x = 0,float y=0,float r=0);
	void setRadius(float);
	float getRadius();
	float area();
	friend ostream &operator <<(ostream &,Circle &);
private:
	float radius;
};

Circle::Circle(float a,float b, float r):Point(a,b){radius=r;}
void Circle::setRadius(float r)
{
	radius = r;
}
float Circle::getRadius(){return radius;}
float Circle::area(){
	return 3.14*radius*radius;
}
ostream &operator << (ostream &output, Circle &c){
	output<<"Center=["<<c.x_coor<<","<<c.y_coor<<"]"<<"radius="<<c.radius<<"area="<<c.area<<endl;
}