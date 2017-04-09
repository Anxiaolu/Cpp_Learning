#include<iostream>
using namespace std;
class Shape
{
public:
	Shape(){};
	~Shape(){};
	virtual float area() = 0; 
};

/*Circle*/
class Circle:public Shape
{
public:
	Circle(float r);
	~Circle(){};
	virtual float area();
private:
	float radius;
};

Circle::Circle(float r):radius(r){}

float Circle::area() {
	return 3.14*radius*radius;
}


/*Rectangle*/
class Rectangle:public Shape
{
public:
	Rectangle(float l,float h);
	~Rectangle(){};
	virtual float area();
private:
	int length;
	int height;
};

Rectangle::Rectangle(float l,float h):length(l),height(h){}

float Rectangle::area() {
	return length*height;
}

/*Trapezoid*/
class Trapezoid:public Shape
{
public:
	Trapezoid(float t,float b,float h);
	~Trapezoid(){};
	virtual float area();
private:
	float top;
	float bottom;
	float height;
};

Trapezoid::Trapezoid(float t,float b,float h):top(t),bottom(b),height(h){}

float Trapezoid::area() {
	return (top + bottom) *height /2;
}

int main()
{	
	Circle cir(5);
	Rectangle re(5,10);
	Trapezoid tra(5,10,15);
	Shape *s[3] ={
		&cir,&re,&tra
	};
	for (int i = 0; i < 3; ++i)
	{
		cout<<"面积为:"<<s[i]->area()<<endl;
	}
	return 0;
}
