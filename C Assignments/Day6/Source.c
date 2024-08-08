#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Employee {
	int id;
	char name[20];
	float salary;
	char mobile[12];
};
int main() {
#pragma region Task 1
	//Write a program to ask user to fill Array of Integers arr_grades[5], using Pointers [ptr++, reset pointer]
	/*
	int arr_grades[5] = { 0 };
	int* arr_ptr;

	arr_ptr = arr_grades;
	for (int i = 0; i < 5; i++) {
		printf("Enter your grade at Subject %i: ", i + 1);
		scanf("%i", arr_ptr);
		arr_ptr++;
	}
	arr_ptr = arr_grades;
	for (int i = 0; i < 5; i++) {
		printf("The Grade of Subject %i: %i\n", i + 1, *arr_ptr);
		arr_ptr++;
	}
	*/

#pragma endregion

#pragma region Task 2
	//Create defination for struct Employee(Id, Name[20].Salary, Mobile[12])
	////Create Array of 5 employees, fill, display
	/*
	struct Employee emps[5];
	for (int i = 0; i < 5; i++) {
		printf("Enter Id of Employee %i: ", i + 1);
		scanf("%i", &emps[i].id);
		printf("Enter Name of Employee %i: ", i + 1);
		scanf("%s", emps[i].name);
		printf("Enter Salary of Employee %i: ", i + 1);
		scanf("%f", &emps[i].salary);
		printf("Enter Mobile of Employee %i: ", i + 1);
		scanf("%s", emps[i].mobile);
	}
	for (int i = 0; i < 5; i++) {
		printf("Id of Employee %i: %i\n", i + 1, emps[i].id);
		printf("Name of Employee %i: %s\n", i + 1, emps[i].name);
		printf("Salary of Employee %i: %f\n", i + 1, emps[i].salary);
		printf("Mobile of Employee %i: %s\n", i + 1, emps[i].mobile);
	}
	*/

#pragma endregion

#pragma region Task 3
	//Same as task 2 (using pointers)
	struct Employee emps[5];
	struct Employee* emp_ptr;

	emp_ptr = emps;
	for (int i = 0; i < 5; i++) {
		printf("Enter Id of Employee %i: ", i + 1);
		scanf("%i", &(*emp_ptr).id);
		printf("Enter Name of Employee %i: ", i + 1);
		scanf("%s", emp_ptr->name);
		printf("Enter Salary of Employee %i: ", i + 1);
		scanf("%f", &emp_ptr->salary);
		printf("Enter Mobile of Employee %i: ", i + 1);
		scanf("%s", emp_ptr->mobile);
		emp_ptr++;
	}
	printf("\n\n");
	emp_ptr = emps;
	for (int i = 0; i < 5; i++) {
		printf("Id of Employee %i: %i\n", i + 1, emp_ptr->id);
		printf("Name of Employee %i: %s\n", i + 1, emp_ptr->name);
		printf("Salary of Employee %i: %f\n", i + 1, emp_ptr->salary);
		printf("Mobile of Employee %i: %s\n", i + 1, emp_ptr->mobile);
		emp_ptr++;
		printf("\n\n");
	}




#pragma endregion




	return 0;
}