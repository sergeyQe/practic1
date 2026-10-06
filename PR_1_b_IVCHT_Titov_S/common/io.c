#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <xkeycheck.h>
#include <stdlib.h>
#include "io.h"
#include <stdlib.h>
#include <time.h>



void printNumberOfWork(int numberOfWork, char letter) {
	printf("Практическое задание %d%c\n", numberOfWork, letter);
}

#pragma region 25
void scanIntNumbers(int mass[], int size)
{

	for (int i = 0; i < size; i++) {
		if (scanf("%d", &mass[i]) != 1) {
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF) {}
		}
	}
}

const char* numberWordForm(int size) {
	if (size % 100 >= 11 && size % 100 <= 14) {
		return "чисел";
	}
	else if (size % 10 == 1) {
		return "число";
	}
	else if (size % 10 >= 2 && size % 10 <= 4) {
		return "числа";
	}
	else return "чисел";
}

void printEnterSomeNumbers(int size)
{
	const char* result = numberWordForm(size);
	printf("Введите %d %s\n", size, result);
}


void printNumbersWithSign(int mass[], int size, const char* sign)
{
	for (int i = 0; i < size - 1; i++) {
		printf("%d%s", mass[i], sign);
	}
	printf("%d", mass[size - 1]);

}

void printEnterCoordinates(char sign)
{
	printf("Введите координаты точки %c:\n", sign);
}


void scanDoubleNumbers(double mass[], int start, int end)
{
	for (int i = start; i < end; i++) {
		if (scanf("%lf", &mass[i]) != 1) {
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF) {}
		}
	}
}
#pragma endregion

#pragma region 26
int generateRandomNumbers(void)
{
	return rand() % 900 + 100;
}

void printGenerateNumber(int number)
{
	printf("Получено число \%d.\n", number);
}

void printMaxIntNumber(int number)
{
	printf("Максимальное число %d\n", number);
}
#pragma endregion 






