#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int power);
int Factorial(int num);
struct Employee {
	int id;
	char name[20];
	float salary;
	char mobile[12];
};

int main() {
#pragma region Task1
	//Change assignment of Day6 , to use Dynamic Allocation (malloc,free)
	/*
	int arr_size;
	struct Employee* emps_ptr;
	struct Employee* start_ptr;

	printf("Enter Array Size: ");
	scanf("%i", &arr_size);

	emps_ptr = malloc(sizeof(struct Employee) * arr_size);

	start_ptr = emps_ptr;

	for (int i = 0; i < arr_size; i++) {
		printf("Enter Id of Employee %i: ", i + 1);
		scanf("%i", &emps_ptr->id);
		printf("Enter Name of Employee %i: ", i + 1);
		scanf("%s", emps_ptr->name);
		printf("Enter Salary of Employee %i: ", i + 1);
		scanf("%f", &emps_ptr->salary);
		printf("Enter Mobile of Employee %i: ", i + 1);
		scanf("%s", emps_ptr->mobile);
		emps_ptr++;
	}
	emps_ptr = start_ptr;
	printf("\n\n");
	
	for (int i = 0; i < arr_size; i++) {
		printf("The Address of struct Employee %i: %i **********\n", i + 1, emps_ptr);
		printf("The Id of Employee %i: %i\n", i + 1, emps_ptr->id);
		printf("The Name of Employee %i: %s\n", i + 1, emps_ptr->name);
		printf("The Salary of Employee %i: %f\n", i + 1, emps_ptr->salary);
		printf("The Mobile of Employee %i: %s\n", i + 1, emps_ptr->mobile);
		emps_ptr++;
		printf("\n");
	}
	emps_ptr = start_ptr;

	free(emps_ptr);
	*/
#pragma endregion

#pragma region Task2
	//Implement Recursive function of Power & Factorial
	/*
	printf("%i\n", Power(2, 4));
	printf("%i\n", Factorial(5));
	*/

#pragma endregion

#pragma region Task3
	/*highlight menu(use pointers to char,pointers to struct employee)
	* DrawMenu		function
	* AddEmployee	function
	* DisplayAllEmployee	function
	* DisplayEmployee	function
	* EditEmployee	function
	*/

#pragma endregion


	return 0;
}
int Power(int base, int power) {
	if (base == 0) {
		return 0;
	}
	else if (power == 0) {
		return 0;
	}
	else if (power == 1) {
		return base;
	}
	else {
		return base * Power(base, power - 1);
	}
}
int Factorial(int num) {
	if (num == 2) return 2;
	return num * Factorial(num - 1);
}