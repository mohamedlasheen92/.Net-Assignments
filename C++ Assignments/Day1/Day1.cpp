#include <iostream>
using namespace std;

struct Point {
	float x;
	float y;
};
//Function Overloading
double Multiply(double, double);
int Multiply(int, int);
Point Multiply(Point p1, Point p2) {
	Point p;
	p.x = p1.x * p2.x;
	p.y = p1.y * p2.y;
	return p;
}

struct Student {
	string name;
	int age;
	string address;
};

#pragma region Task2: Fill and Display (Static Allocation) Functions
/*
void FillStudents(Student* std_ptr, int stdsSize) {
	for (int i = 0; i < stdsSize; i++) {
		cout << "Enter Name of Student " << i + 1 << ": ";
		cin >> std_ptr[i].name;
		cout << "Enter Age of Student " << i + 1 << ": ";
		cin >> std_ptr[i].age;
		cout << "Enter Address of Student " << i + 1 << ": ";
		cin >> std_ptr[i].address;
	}
}
void DisplayStudents(Student* std_ptr, int stds_size) {
	for (int i = 0; i < stds_size; i++) {
		cout << "The Name of Student " << i + 1 << ": " << std_ptr[i].name << endl;
		cout << "The Age of Student " << i + 1 << ": " << std_ptr[i].age << endl;
		cout << "The Address of Student " << i + 1 << ": " << std_ptr[i].address << endl;
	}
}
*/
#pragma endregion

#pragma region Task2: Fill and Display (Static Allocation) Functions

void FillStudents(Student* std_ptr, int stdsSize) {
	for (int i = 0; i < stdsSize; i++) {
		cout << "Enter Name of Student " << i + 1 << ": ";
		cin >> std_ptr->name;
		cout << "Enter Age of Student " << i + 1 << ": ";
		cin >> std_ptr->age;
		cout << "Enter Address of Student " << i + 1 << ": ";
		cin >> std_ptr->address;

		std_ptr++;
	}
}
void DisplayStudents(Student* std_ptr, int stds_size) {
	for (int i = 0; i < stds_size; i++) {
		cout << "The Name of Student " << i + 1 << ": " << std_ptr[i].name << endl;
		cout << "The Age of Student " << i + 1 << ": " << std_ptr[i].age << endl;
		cout << "The Address of Student " << i + 1 << ": " << std_ptr[i].address << endl;
	}
}

#pragma endregion

int main()
{
#pragma region Task1
	/*
	Point pp1;
	pp1.x = 3.5;
	pp1.y = 2;
	Point pp2;
	pp2.x = 2;
	pp2.y = 4;
	Point result;
	result = multiply(pp1, pp2);
	cout << result.x << " " << result.y << endl;
	*/
#pragma endregion

#pragma region Task2: (Static Allocation)
	/*Student stds[3];
	FillStudents(stds, 3);
	DisplayStudents(stds, 3);*/
#pragma endregion


#pragma region Task2: (Dynamic Allocation)
	int stds_size = 3;
	Student* stds_ptr = new Student[stds_size];
	FillStudents(stds_ptr, stds_size);
	DisplayStudents(stds_ptr, stds_size);

	
#pragma endregion


	cout << "\n" << endl;
	return 0;
}


