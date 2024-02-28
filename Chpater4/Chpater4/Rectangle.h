#pragma once
#include "Shape.h"
class Rectangle:public Shape
{
public:
	Rectangle();
	const float area() override;
	bool isSpecial() override;
	const void printSpecial() override;
private:
	double distance(Point p1, Point p2);

};

