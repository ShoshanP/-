#pragma once
#include <ostream>
class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0);
    Point(const Point& other);
    friend std::istream& operator>>(std::istream& is,Point& point);
   

    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

