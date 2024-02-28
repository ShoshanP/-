#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
	int sum, choose, radius;
	cout << "How many shapes you would like to define?" << endl;
	cin >> sum;
	Shape** s = new Shape * [sum];
	for (int i = 0; i < sum; i++)
	{
		cout << "Which shape will you choose ?Circle - 1, Triangle - 2, Rectangle - 3" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "Enter radius" << endl;
			cin >> radius;
			s[i] = new Circle(radius); break;
		case 2:
			s[i] = new Triangle();
			break;
		case 3:
			s[i] = new Rectangle;
			break;

		default:
			cout << "invalid input" << endl;
			i--;
			break;
		}
	}
	for (int i = 0; i < sum; i++)
	{
		cout << *s[i] << " ";
		if (s[i]->isSpecial())
			s[i]->printSpecial();
		else
			cout << endl;
	}
	for (int i = 0; i < sum; i++)
	{
		delete s[i];
	}
	delete s;
	return 0;
}