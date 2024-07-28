#include <stdio.h>
#include <stdlib.h>

int main() {
	// *** The Assignments Of Day1


	// [1] C Program to Print "Hello World"
	printf("Hello World\n");


	// [2] C Program to print ASCII number of a char
	char ch;
	printf("Enter a Character: ");
	scanf("%c", &ch);
	printf("The ASCII Value of \"%c\" is: %d", ch, ch);


	// [3] C Program to print a float number entered by the user
	float fl;
	printf("Enter a Float Number: ");
	scanf("%f", &fl);
	printf("The Value is: %f", fl);


	// [4] C Program to add two integers
	short n1, n2;
	printf("Enter first value: ");
	scanf("%hd", &n1);
	printf("Enter second value: ");
	scanf("%hd", &n2);

	short sum = n1 + n2;
	printf("The Sum is: %hd", sum);


	// [5] C Program to make simple calculations (add, sub, multiply, divid) on two integers
	short n1, n2, add, sub, mul, div;
	printf("Enter two Number: ");
	scanf("%hd %hd", &n1, &n2);
	add = n1 + n2;
	sub = n1 - n2;
	mul = n1 * n2;
	div = n1 / n2;
	printf("The addition: %d \n", add);
	printf("The subtraction: %d \n", sub);
	printf("The multiply: %d \n", mul);
	printf("The division: %d \n", div);


	// [6] C Program to print Hexa of a number
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("The Hexadecimal value for %d is: %x", x, x);



	// [7] C Program to compute Quotient and Remainder
	int n1, n2;
	printf("Enter your two numbers here: ");
	scanf("%d %d", &n1, &n2);

	int quotient = n1 / n2;
	int remainder = n1 % n2;

	printf("Quotient: %d \n", quotient);
	printf("Remainder: %d \n", remainder);



	return 0;
}