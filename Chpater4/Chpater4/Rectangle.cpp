#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(): Shape(4) {

}
double Rectangle::distance(Point p1, Point p2) {
   
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
bool Rectangle::isSpecial() {
    double dist1 = distance(pointArr[0], pointArr[1]);
    double dist2 = distance(pointArr[1], pointArr[2]);
    double dist3 = distance(pointArr[2], pointArr[3]);
    double dist4 = distance(pointArr[3], pointArr[0]);
    return dist1 == dist2 && dist2 == dist3 && dist3 == dist4;
}
const void Rectangle::printSpecial() {
    if(isSpecial())
    cout << "Square wuth side length:" << distance(pointArr[0], pointArr[1]) << endl;
}
const float Rectangle::area(){
    double dist1 = distance(pointArr[0], pointArr[1]);
    double dist2 = distance(pointArr[1], pointArr[2]);
    return dist1 * dist2;
}