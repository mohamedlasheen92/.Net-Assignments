#pragma once

#include <iostream>
using namespace std;

#include "Marker.h"

class Instructor
{
public:

	Instructor() {

	}

	void WriteOnBoard(Marker marker) {
		cout << "Instructor is writting on board using Marker " << marker.Color << endl;
	}
};

