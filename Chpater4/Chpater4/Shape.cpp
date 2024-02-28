#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;
Shape::Shape(int num):numOfPoints(num=0)
{

	pointArr = new Point[3];
}
Shape::Shape(){}
Shape::Shape(const Shape& src) : numOfPoints(src.numOfPoints) {
	pointArr = new Point[numOfPoints];
	for (int i = 0; i < numOfPoints; i++) {
		pointArr[i] = src.pointArr[i];
	}
}//copy ctor

Shape::Shape(Shape&& src) 
{
	numOfPoints = src.numOfPoints;
	pointArr = src.pointArr;
	src.pointArr = nullptr;
}//move ctor
Shape::~Shape() {
	delete[] pointArr;
}

std::istream& operator>>(std::istream& is, Shape& shape) {
	cin >> shape.numOfPoints;
	cout << "enter values of " << shape.numOfPoints << endl;
	for (int i = 0; i < shape.numOfPoints; i++)
	{
		is >> shape.pointArr[i];
	}
	return is;
}

std::ostream& operator<<(std::ostream& os, const Shape& s) {
	os << "Points: " << endl;
	for (int i = 0; i < s.numOfPoints; i++)
	{
		os << s.pointArr[i];
	}
	return os;
}