#include "Point.h"
#include <iostream>
using namespace std;
Point::Point(int x, int y) : x(x), y(y) {
	
}
Point::Point(const Point& other) : x(other.x), y(other.y) {

}
std::istream& operator>>(std::istream& is, Point& point) {
	is >> point.x >> point.y;
	return is;
	
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
	os << "[" << p.x << "," << p.y << "]" << endl;
	return os;
}
