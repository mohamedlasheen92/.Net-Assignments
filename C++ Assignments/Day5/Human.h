#pragma once

#include <iostream>
using namespace std;

#include "Creature.h"


class Human : public Creature
{
public:
	int Id;

	Human() {

	}
	Human(int _age) : Creature(_age) {
	
	}

	Human(int _id, int _age) : Creature(_age) {
		Id = _id;
	}

	void Breath() {
		cout << "Human is Breathing...\n";
	}



};

