#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "calc.h"
#include <math.h>

#pragma region 25
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
	return sqrt(pow(coordinates[2] - coordinates[0], 2) + pow(coordinates[3] - coordinates[1], 2));
}

int mod(int number)
{
	return number % 10;
}

int* fillReverseNumber(int number, int size)
{
	int* mass = malloc(size * sizeof(int));
	for (int i = size - 1; i >= 0; i--) {
		mass[i] = mod(number);
		number /= 10;
	}
	return mass;
}
#pragma endregion

#pragma region 26
int compareInt(const void* a, const void* b)
{
	int x = *(const int*)a;
	int y = *(const int*)b;
	return (x > y) - (x < y);
}



int findMaxIntNumber(int* mass, int size)
{
	return mass[size - 1];
}





void sortDigitNumbers(int* mass, int size)
{
	qsort(mass, size, sizeof(int), compareInt);
}
#pragma endregion

#pragma region 27
int countDuplicates(int mass[], int size)
{
	int count = 0;
	sortDigitNumbers(mass, size);
	int flag = 0;
	for (int i = 0; i < size - 1; i++) {
		if (mass[i] == mass[i + 1]) {
			count++;
			if (flag == 0) {
				count++;
				flag = 1;
			}
		}
		else {
			flag = 0;
		}
	}
	return count;
}
#pragma endregion