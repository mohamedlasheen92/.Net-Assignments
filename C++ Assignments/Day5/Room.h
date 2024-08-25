#pragma once
#include <iostream>
using namespace std;

#include "Instructor.h"
#include "Table.h"
#include "Wall.h"

class Room
{

public:

	Instructor* Inst;
	Table* Tables[10];
	int TablesCount = 0;
	Wall Walls[4];

	void AssignInstructor(Instructor* inst) {
		Inst = inst;
	}
	void InstructorLeaves(Instructor* inst) {
		Inst = NULL;
	}
	void AddTable(Table* table) {
		Tables[TablesCount++] = table;
	}
	void TurnOnDataShow() {
		cout << "Instructor is turning on the data show...\n";
	}

};

