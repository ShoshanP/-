#pragma once
#include "Shape.h"
class Circle:public Shape
{
public:
	float radius;
	Circle(float r);
	
	const float area() override;
	
	bool isSpecial() override;
	const void printSpecial() override;
};

