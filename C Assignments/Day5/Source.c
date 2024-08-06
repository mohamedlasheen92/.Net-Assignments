//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* A Program with the following functions
* int Add(int, int)
* int subtract(int, int)
* int multiply(int, int)
* int divide(int, int) [check second number is not zero]
printing will be from the main program
*/
float divide(float, float);

/*A Program to implement swap function[Passing by value & Passing by address]
* print variables before swap function, inside function, after function
*/
//void swap(float, float);
void swap(float*, float*);

int main() {
	float a = 10, b = 6;
	float result = divide(a, b);
	printf("%f\n\n", result);

	/*
	printf("Before Swap a & b: %f & %f\n", a, b);
	swap(a, b);
	printf("After Swap a & b: %f & %f\n", a, b);
	*/
	printf("Before Swap a & b: %f & %f\n", a, b);
	swap(&a, &b);
	printf("After Swap a & b: %f & %f\n", a, b);
	

	return 0;
}

float divide(float x, float y) {
	return x / y;
}
/*
void swap(float x, float y) {
	float temp = x;
	x = y;
	y = temp;
	printf("Inside Swap a & b: %f & %f\n", x, y);
}
*/
void swap(float* x, float* y) {
	float temp = *x;
	*x = *y;
	*y = temp;
	printf("Inside Swap a & b: %f & %f\n", *x, *y);
}