#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
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

int main() {

#pragma region Assignment 1
	// A Program to ask for 4 student names  then print them to the user. [array of String => 2D array of char]

	/*char names[4][10];
	for (int i = 0; i < 4; i++) {
		printf("Enter the Name of Student %i: ", i + 1);
		//scanf("%s", names[i]);
	}
	for (int i = 0; i < 4; i++) {
		printf("The Name of Student %i: %s\n", i + 1, names[i]);
	}*/
#pragma endregion

#pragma region Assignment 2
	//A Program to ask user for first/last name then print fullname [string.h]
	/*char firstName[10];
	char lastName[10];
	char fullName[21];
	printf("Enter First Name: ");
	scanf("%s", firstName);
	printf("Enter Last Name: ");
	scanf("%s", lastName);

	strcpy(fullName, firstName);
	strcat(fullName, " ");
	strcat(fullName, lastName);

	printf("Full Name: %s.\n", fullName);*/

#pragma endregion

#pragma region Assignment 3
	//A Program to get Extended Keys ASCII [Right,Left,Home,End,Del]
	/*
	char c;
	int flag = 1;

	do {
		printf("Enter a Character: ");
		c = getch();
		switch (c) {
		case -32:
			c = getch();
			switch (c) {
			case 77:
				printf("RIGHT\n");
				break;
			case 75:
				printf("LEFT\n");
				break;
			case 71:
				printf("HOME\n");
				break;
			case 79:
				printf("END\n");
				break;
			case 83:
				printf("DEL\n");
				break;
			default:
				printf("This Extended Key is %i\n", c);
				break;
			}
			break;
		case 27:
			flag = 0;
			printf("\nEXIT\n");
			break;
		default:
			printf("The ASCII code for char %c: %i\n", c, c);
		}

	} while (flag != 0);
	*/

#pragma endregion

#pragma region Assignment 4
	//A Program to make Highlight Menu

	char myChar;
	char menu[5][12] = { "Add", "Edit", "Display", "Display All", "Exit" };
	int currentChoice = 0;
	int normalColor = 15;
	int highlightColor = 100;
	int quitFlag = 0;

	do {
		//Draw Menu
		for (int i = 0; i < 5; i++) {
			if (currentChoice == i) {
				textattr(highlightColor);
			}
			else {
				textattr(normalColor);
			}

			gotoxy(50, 1 + i);
			printf("%s\n", menu[i]);
			//Reset Color
			textattr(normalColor);
		}
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
				printf("This Extended Ke is %i\n", myChar);
			}
			break;
		case 13:
			system("cls");
			switch (currentChoice) {
			case 0:	//UP
				printf("ADD");
				break;
			case 1:	//UP
				printf("Edit");
				break;
			case 2:	//UP
				printf("Display");
				break;
			case 3:	//UP
				printf("Display All");
				break;
			case 4:	//UP
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

#pragma endregion




	return 0;
}