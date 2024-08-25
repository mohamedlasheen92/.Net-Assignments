#pragma once
#include <iostream>
using namespace std;

#include "Shape.h"

class Rectangle : public Shape
{
private:
	int Length;
	int Width;

public :

	Rectangle(int _len, int _wid) {
		Length = _len;
		Width = _wid;
	}

	void GetArea() {
		int Area = Length * Width;
		cout << "The Area of Rectangle: " << Area << endl;
	}


};

