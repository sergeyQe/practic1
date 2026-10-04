#include <stdlib.h>
#include "calc.h"
#include <math.h>
int sum(int mass[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += mass[i];
	}
	return result;
}


int multi(int mass[], int size)
{
	int result = 1;
	for (int i = 0; i < size; i++) {
		result *= mass[i];
	}
	return result;
}


double average(int sum, int size)
{
	return (double)sum / (double)size;
}

double segmentLength(double coordinates[])
{
	return sqrt(pow(coordinates[2] - coordinates[0],2) + pow(coordinates[3] - coordinates[1],2));
}
