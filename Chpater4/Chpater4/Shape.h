#pragma once
#include "Point.h"
class Shape
{
public:
	int numOfPoints;
	Point* pointArr;
	Shape(int);
	Shape();
	Shape(const Shape& src);//copy ctor
	Shape(Shape&& src);//move ctor
	virtual ~Shape();
	virtual const float area()=0;
	virtual bool isSpecial() = 0;
	virtual const void printSpecial() = 0;
	friend std::istream& operator>>(std::istream& is, Shape& shape);

	friend std::ostream& operator<<(std::ostream& os, const Shape& shape);
};

