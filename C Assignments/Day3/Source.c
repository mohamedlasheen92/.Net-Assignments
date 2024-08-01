#include <stdio.h>
#include <stdlib.h>

int main() {

#pragma region A Program that Gets the scores from user of 5 Subjects for 1 student,and display them on the screen
	/*
	* Get Max,Min Grades (bonus)
	* Merge with Simple Menu (bonus)
	*/
	/*
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
				if (grades[i] < minGrade) minGrade = grades[i];

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
	*/
#pragma endregion

#pragma region A Program that gets from user the scores of 4 students in 5 subjects,and display then on the screen,
	/*
	* Calculate Sum for each Student
	* Calculate Average for each Subject
	*/

	int scores[4][5];
	int studentsGradesSum[4] = { 0, 0, 0, 0 };
	int subjectAverage[5] = { 0, 0, 0, 0, 0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("Enter the Score of Subject %i for Student %i: ", j + 1, i + 1);
			scanf_s("%i", &scores[i][j]);
			studentsGradesSum[i] += scores[i][j];
			subjectAverage[j] += scores[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("The Score of Subject %i for Student %i: %i \n", j + 1, i + 1, scores[i][j]);
		}
		printf("The Sum of Grades for Student %i: %i \n", i + 1, studentsGradesSum[i]);
	}
	for (int i = 0; i < 5; i++) {
		float average = (float)subjectAverage[i] / 4;
		printf("The Average Grades of Subject %i: %f \n", i + 1, average);
	}





#pragma endregion



	return 0;
}