#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

#pragma region A Program that Gets the scores from user of 5 Subjects for 1 student,and display them on the screen
	int grades[5] = { 0, 0, 0, 0, 0 };
	int maxGrade = 0, minGrade = 101;
	char choice;

	do {


		printf("Press 'a' to Add All.\n");
		printf("Press 'e' to Edit.\n");
		printf("Press 'd' to Display All.\n");
		printf("Press 'x' to Exit.\n");

		choice = getch();

		switch (choice) {
		case 'a':
			for (int i = 0; i < 5; i++) {
				printf("Enter the Grade of Subject %i: ", i + 1);
				scanf_s("%i", &grades[i]);

				if (grades[i] >= maxGrade) maxGrade = grades[i];
				else if (grades[i] < minGrade) minGrade = grades[i];

			}
			break;

		case 'e':
			printf("Case to Edit\n");
			break;

		case 'd':
			for (int i = 0; i < 5; i++) {
				printf("The Grade of Subject %i: %i\n", i + 1, grades[i]);
			}
			printf("The Maximum Grade is %i \n", maxGrade);
			printf("The Minimum Grade is %i \n", minGrade);
			break;

		case 'x':
			printf("Case to Exit\n");
			break;
		default:
			printf("Invalid Choice\n");
			break;
		}
		printf("***********************\n");

	} while (choice != 'x');




#pragma endregion



	return 0;
}