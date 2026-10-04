#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "tasks.h"
#include "io.h" 
#include "calc.h"
void work25A(void)
{
	int size = 3;
	int* massForThreeNumbers = malloc(size * sizeof(int));
	scanNumbers(massForThreeNumbers, size);
	printNumbersWith(massForThreeNumbers, size, '+');
	printf("=%d\n", sum(massForThreeNumbers, size));
	printNumbersWith(massForThreeNumbers, size, '*');
	printf("=%d\n", multi(massForThreeNumbers, size));
	printf("(");
	printNumbersWith(massForThreeNumbers, size, '+');
	printf(")/%d=%.3f\n", size, average(sum(massForThreeNumbers, size), size));
}