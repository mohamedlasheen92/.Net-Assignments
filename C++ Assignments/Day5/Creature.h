#pragma once

#include <iostream>
using namespace std;

class Creature
{

public:
	int Age;
	
	Creature() {
		Age = 1;
	}
	Creature(int _age) {
		Age = _age;
	}


	void Breath() {
		cout << "Creature is Breathing...\n";
	}
	void Eat() {
		cout << "Creature is Eating...\n";
	}

};

