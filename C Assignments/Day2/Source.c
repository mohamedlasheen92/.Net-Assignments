#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

#pragma region [1] A Program to ask userfor integer, and check if it is even or odd
	/*int num;
	printf("Enter a Number: ");
	scanf("%i", &num);
	if (num % 2 == 0)
		printf("Even");
	else
		printf("Odd");*/
#pragma endregion

#pragma region [2] A Program to ask user for a degree and print the equivilant grade
		/*char degree;
		printf("Enter your degree: ");
		degree = getchar();

		switch (degree) {
		case 'A':
			printf("Excellent\n");
			break;
		case 'B':
			printf("Very Good\n");
			break;
		case 'C':
			printf("Good\n");
			break;
		case 'D':
			printf("Fair\n");
			break;
		case 'E':
			printf("Failed\n");
			break;
		default:
			printf("No Match\n");

		}*/

#pragma endregion

#pragma region [3] A Program that ask the user for a choice and print the choice (simple menu)
		/*char mych;
		do {
			printf("Press a for Add\n");
			printf("Press e for Edit\n");
			printf("Press s for Save\n");
			printf("Press x for Exit\n");

			printf("Enter a Char: ");
			mych = getch();

			switch (mych) {
			case 'a':
				//system("cls");
				printf("you pressed Add\n");
				break;
			case 'e':
				//system("cls");
				printf("you pressed Edit\n");
				break;
			case 's':
				//system("cls");
				printf("you pressed Save\n");
				break;
			case 'x':
				//system("cls");
				printf("you pressed Exit\n");
				break;
			default:
				//system("cls");
				printf("Invalid Option\n");
				break;
			}

		} while (mych != 27);*/

#pragma endregion

#pragma region [4] A Program to calculate bank interest,ask user for amount and number of years(for loop)
		/*int years;
		float amount, interest = 0.1;
		printf("Enter the amount: ");
		scanf("%f", &amount);
		printf("Enter no. of Years: ");
		scanf("%i", &years);

		for (int i = 0; i < years; i++) {
			amount += amount * interest;
			printf("After %i years, Your balance will be %f \n", i + 1, amount);
		}*/

#pragma endregion

#pragma region [5] A Program to print even numbers from 0 to 100(for loop)
		/*for (int i = 0; i <= 100; i += 2) {
			printf("%i\n", i);
		}*/
#pragma endregion

#pragma region [6] A Program to take numbers from user and exit when the amount reaches 1000(while)
	/*int amount = 0;
	int temp;
	while (amount < 1000) {
		printf("Enter a Number: ");
		scanf("%i", &temp);
		amount += temp;
		printf("You have reached %i until now\n", amount);
	}
	printf("You have reached %i\n", amount);*/

#pragma endregion

#pragma region [7] A program to ask user for a char,then print ASCII of it, until the user press Esc(27)
	/*char mych;
	do {
		printf("Enter a Char: ");
		mych = getch();
		printf("The ASCII code of Char %c is %i\n", mych, mych);
	} while (mych != 27);*/

#pragma endregion



	return 0;
}