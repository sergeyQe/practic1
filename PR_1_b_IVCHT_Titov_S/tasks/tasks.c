#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "tasks.h"
#include "io.h" 
#include "calc.h"
void work25A(int numberOfWork)
{
	printNumberOfWork(numberOfWork,'A');
	int size = 3;
	int* massForThreeNumbers = malloc(size * sizeof(int));
	printEnterSomeNumbers(size);
	scanIntNumbers(massForThreeNumbers, size);
	printNumbersWith(massForThreeNumbers, size, '+');
	printf("=%d\n", sum(massForThreeNumbers, size));
	printNumbersWith(massForThreeNumbers, size, '*');
	printf("=%d\n", multi(massForThreeNumbers, size));
	printf("(");
	printNumbersWith(massForThreeNumbers, size, '+');
	printf(")/%d=%.3f\n", size, average(sum(massForThreeNumbers, size), size));
}

void work25B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
	int size = 4;
	double* massForCoordinates = malloc(size * sizeof(double));
	printEnterCoordinates('A');
	scanDoubleNumbers(massForCoordinates, 0,2);
	printEnterCoordinates('B');
	scanDoubleNumbers(massForCoordinates, 2, 4);
	printf("Длина отрезка AB =%.3f \n", segmentLength(massForCoordinates));

}
