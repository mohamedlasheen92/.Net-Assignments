#pragma once
#include <iostream>
using namespace std;

#include "Shape.h"

class Circle : public Shape
{
private:
	int Radius;

public:
	Circle(int _rad) {
		Radius = _rad;
	}

	void GetArea() {
		int Area = 3.14 * Radius * Radius;
		cout << "The Area of Square: " << Area << endl;
	}
};

