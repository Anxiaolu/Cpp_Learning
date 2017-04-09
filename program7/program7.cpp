#include<iostream>
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;
int main()
{
	Point point(1.5,2.3);
	Circle circle(1,2,3);
	Cylinder cylinder(1,2,3,4);
	cout<<"First Cylinder:"<<cylinder;
	return 0;
}