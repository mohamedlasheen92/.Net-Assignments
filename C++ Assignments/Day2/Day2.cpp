#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int age;
	string address;
	float grade;

public:
	Student(string _name, int _age, string _address, float _grade) {
		SetName(_name);
		SetAge(_age);
		SetAddress(_address);
		SetGrade(_grade);
	}
	Student(string _name, int _age, float _grade) {
		SetName(_name);
		SetAge(_age);
		SetGrade(_grade);
	}

	void SetName(string _name) {
		if (_name.length() > 7 && _name.length() < 15) {
			name = _name;
		}
		else {
			cout << "Invalid Name\n";
		}

	}
	string GetName() {
		return name;
	}
	void SetAge(int _age) {
		if (_age >= 19 && _age <= 21) {
			age = _age;
		}
		else {
			cout << "Age must be between 19 and 21\n";
		}
	}
	int GetAge() {
		return age;
	}
	void SetAddress(string _address) {
		address = _address;
	}
	string GetAddress() {
		return address;
	}
	void SetGrade(float _grade) {
		if (grade <= 100 && grade > 0) {
			grade = _grade;
			if (grade > 90) {
				cout << "Your Degree is A\n";
			}
			else if (grade > 80) {
				cout << "Your Degree is B\n";
			}
			else if (grade > 70) {
				cout << "Your Degree is C\n";
			}
			else if (grade > 60) {
				cout << "Your Degree is D\n";
			}
			else {
				cout << "Your Degree is F\n";
			}
		}
		else {
			cout << "Invalid Grade\n";
		}
	}
	float GetGrade() {
		return grade;
	}

	void ShowStatus() {
		if (grade > 60) cout << "Success\n";
		else cout << "Fail\n";
	}
};
int main()
{




	return 0;
}
