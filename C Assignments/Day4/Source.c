#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

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
	//A Program to ger Extended Keys ASCII [Right,Left,Home,End,Del]

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




#pragma endregion



	return 0;
}