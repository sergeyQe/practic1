#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "calc.h"
#include <math.h>
#include <stdio.h>


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

#pragma region 29
int A29A(double x, double y)
{
	return pow(x, 2) + pow(y, 2) >= 4 && x <= 2 && y < x;
}
int B29A(double x, double y)
{
	return y >= 0 && y <= 0.5 && y <= sin(x);
}
int A29B(double x, double y)
{
	return pow(x, 2) + pow(y, 2) && (y >= x && x > 0 || x < 0);
}
int B29B(double x, double y)
{
	return y >= pow(x, 2) && (x<0 && y>x || x > 0 && y < x);
}
int C29B(double x, double y)
{
	return x >= 0 && ((pow(x, 2) + pow(y, 2)) <= 1 || y <= 1 && y > x - 1);
}
int A29C(double x, double y)
{
	if (y >= 4 - pow(x, 2) && x >= 0 && y <= pow(x, 2)) return 1;
	if (y >= pow(x, 2)) {
		if (y >= 2 - x) return 1;
		if (y <= 2 - x && y > pow(x, 2) && y <= 4 - pow(x, 2)) return 1;
		if (y <= 4 - pow(x, 2) && y <= 2 - x && y <= pow(x, 2) && x <= 0) return 1;
	}
	return 0;
}
int B29C(double x, double y)
{
	if ((pow(x, 2) + pow(y, 2)) >= 1 && y <= -x && y <= x) return 1;
	if ((pow(x, 2) + pow(y, 2)) <= 1) {
		if (y >= -x && y >= x) return 1;
		if (y >= 0 && (y >= x || y >= -x)) return 1;
	}
	return 0;
}
#pragma endregion

#pragma region 30
int multiTwoNumbers(int x, int y)
{
	return x * y;
}

int multiWithPlus(int x, int y)
{
	int result = 0;
	if (x == 0 || y == 0) return result;
	if (y < 0) {
		x = -x;
	}
	y = abs(y);
	for (int i = 0; i < y; i++) {
		result += x;
	}
	return result;
}

int sumFibonachi(int n)
{
	if (n <= 0) return 0;
	int a = 0;
	int b = 1;
	int c;
	int sum = 0;
	while (b < n) {
		sum += b;
		c = a + b;
		a = b;
		b = c;
		
	}
	return sum;
}

#pragma endregion
