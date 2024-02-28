#include "Circle.h"
#include <iostream>
using namespace std;
Circle:: Circle(float r) :Shape(1), radius(r)
{

}
const float Circle::area(){
	return radius * radius * 3.14;
}

bool Circle::isSpecial() {
	return pointArr[0].x == 0 && pointArr[0].y == 0;
}
const void Circle:: printSpecial() {
	if (isSpecial())
		cout << "A canocial circle with a radius " << radius << endl;
		
}
