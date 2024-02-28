#pragma once
#include "Shape.h"
class Triangle: public Shape
{
	double distance(Point p1, Point p2);
public:
	Triangle();
	

	const float area() override;
	bool isSpecial() override;
	const void printSpecial() override;


};

