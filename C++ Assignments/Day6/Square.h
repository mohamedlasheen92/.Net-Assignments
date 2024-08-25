#pragma once
#include <iostream>
using namespace std;

#include "Shape.h"

class Square : public Shape
{
private:
	int Length;

public:
	Square(int _len) {
		Length = _len;
	}
	void GetArea() {
		int Area = Length * Length;
		cout << "The Area of Square: " << Area << endl;
	}
};

