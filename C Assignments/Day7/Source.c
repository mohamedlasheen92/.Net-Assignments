#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void gotoxy(int x, int y)
{
	COORD coord = { 0, 0 };
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

int Power(int base, int power);
int Factorial(int num);
void DrawMenu(char*, int, int, int, int, int, int);
void AddEmployees(struct Employee*, int);
void DisplayAllEmployees(struct Employee*, int);
void DisplayEmployee(struct Employee*, int, int);
void EditEmployee(struct Employee*, int, int);
struct Employee {
	int id;
	char name[20];
	float salary;
	char mobile[12];
};

int checkAdd = 0; //Global Variable
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
	char myChar;
	char menu[5][12] = { "Add", "Edit", "Display", "Display All", "Exit" };
	int currentChoice = 0;
	int normalColor = 15;
	int highlightColor = 100;
	int quitFlag = 0;

	int emp_size = 3;
	struct Employee* emp_ptr;
	struct Employee* start_ptr;
	emp_ptr = malloc(sizeof(struct Employee) * 4);
	start_ptr = emp_ptr;

	do {
		
		DrawMenu(menu, 5, 50, 1, normalColor, highlightColor, currentChoice);

		gotoxy(50, 10);
		printf("Enter a Character.");
		myChar = getch();
		switch (myChar) {

		case -32:	//Case Extended
			myChar = getch();
			switch (myChar) {
			case 72:	//UP
				if (currentChoice == 0) currentChoice = 5;
				currentChoice--;
				break;
			case 80:	//DOWN
				if (currentChoice == 4) currentChoice = -1;
				currentChoice++;
				break;
			case 73:	//PAGE UP
				currentChoice = 0;
				break;
			case 81:	//PAGE DOWN
				currentChoice = 4;
				break;
			default:
				system("cls");
				printf("This Extended Key is %i\n", myChar);
			}
			break;
		case 13:	//Enter
			system("cls");
			switch (currentChoice) {
			case 0:	//ADD
				printf("Add Employees.\n\n");
				AddEmployees(emp_ptr, emp_size, &checkAdd);
				emp_ptr = start_ptr;
				break;
			case 1:	//EDIT
				printf("Edit Employee\n\n");
				printf("Enter Number of Employee to Edit: ");
				int indexToEdit;
				scanf("%i", &indexToEdit);
				EditEmployee(emp_ptr, emp_size, indexToEdit);
				break;
			case 2:	//DISPLAY
				printf("Display Employee\n\n");
				int index;
				printf("Enter Number of Employee to Display: ");
				scanf("%i", &index);
				DisplayEmployee(emp_ptr, emp_size, index);
				break;
			case 3:	//DISPLAY ALL
				printf("Display All Employees.\n\n");
				DisplayAllEmployees(emp_ptr, emp_size);
				emp_ptr = start_ptr;
				break;
			case 4:	//EXIT
				printf("Exit\n");
				quitFlag = 1;
				break;
			}
			break;
		case 27:
			system("cls");
			printf("EXIT\n");
			quitFlag = 1;
			break;

		default:
			system("cls");
			printf("The ASCII Code for Char %c : %i", myChar, myChar);
			break;
		}

	} while (quitFlag != 1);


	free(emp_ptr);

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
void DrawMenu(char* menu, int menuSize, int col, int row, int normalColor, int highlightColor, int currentChoice) {
	for (int i = 0; i < menuSize; i++) {
		if (currentChoice == i) {
			textattr(highlightColor);
		}
		else {
			textattr(normalColor);
		}

		gotoxy(50, 1 + i);
		printf("%s\n", menu);
		menu += 12;
		//Reset Color
		textattr(normalColor);
	}
}
void AddEmployees(struct Employee* emp_ptr, int emp_size, int* checkAdd) {
	for (int i = 0; i < emp_size; i++) {
		printf("Enter Id of Employee %i: ", i + 1);
		scanf("%i", &emp_ptr->id);
		printf("Enter Name of Employee %i: ", i + 1);
		scanf("%s", emp_ptr->name);
		printf("Enter Salary of Employee %i: ", i + 1);
		scanf("%f", &emp_ptr->salary);
		printf("Enter Mobile of Employee %i: ", i + 1);
		scanf("%s", emp_ptr->mobile);
		emp_ptr++;
	}
	*checkAdd = 1;

}
void DisplayAllEmployees(struct Employee* emp_ptr, int emp_size) {
	if (checkAdd == 0) {
		printf("\nPlease Add Employees First !\n");
		return;
	}
	system("cls");
	for (int i = 0; i < emp_size; i++) {
		printf("Id of Employee %i: %i\n", i + 1, emp_ptr->id);
		printf("Name of Employee %i: %s\n", i + 1, emp_ptr->name);
		printf("Salary of Employee %i: %f\n", i + 1, emp_ptr->salary);
		printf("Mobile of Employee %i: %s\n", i + 1, emp_ptr->mobile);
		emp_ptr++;
		printf("\n");
	}
	
}
void DisplayEmployee(struct Employee* emp_ptr, int emp_size, int index) {
	if (checkAdd == 0) {
		printf("\nPlease Add Employees First !\n");
		return;
	}
	if (index > 0 && index <= emp_size) {
		printf("Id of Employee %i: %i\n", index, emp_ptr[index - 1].id);
		printf("Name of Employee %i: %s\n", index, emp_ptr[index - 1].name);
		printf("Salary of Employee %i: %f\n", index, emp_ptr[index - 1].salary);
		printf("Mobile of Employee %i: %s\n", index, emp_ptr[index - 1].mobile);
	}
	else {
		printf("Invalid Number\n\n");
	}

}
void EditEmployee(struct Employee* emp_ptr, int emp_size, int index) {
	if (checkAdd == 0) {
		printf("\nPlease Add Employees First !\n");
		return;
	}
	if (index > 0 && index <= emp_size) {
		printf("Enter Id of Employee %i: ", index);
		scanf("%i", &emp_ptr[index - 1].id);
		printf("Enter Name of Employee %i: ", index);
		scanf("%s", emp_ptr[index - 1].name);
		printf("Enter Salary of Employee %i: ", index);
		scanf("%f", &emp_ptr[index - 1].salary);
		printf("Enter Mobile of Employee %i: ", index);
		scanf("%s", emp_ptr[index - 1].mobile);
	}
	else {
		printf("Invalid Number\n\n");
	}

}