#include "Triangle.h"
#include <cmath>
Triangle::Triangle(): Shape(3)
{

}

bool Triangle::isSpecial() {
    double dist1 = distance(pointArr[0], pointArr[1]);
    double dist2 = distance(pointArr[1], pointArr[2]);
    double dist3 = distance(pointArr[2], pointArr[0]);

    return dist1 == dist2 && dist2 == dist3;
}


    double Triangle:: distance(Point p1, Point p2) {
        return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    }
    const float Triangle::area() {
        return 0.5 * std::abs(pointArr[0].x * (pointArr[1].y - pointArr[2].y) +
            pointArr[1].x * (pointArr[2].y - pointArr[0].y) +
            pointArr[2].x * (pointArr[0].y - pointArr[1].y));
    }
