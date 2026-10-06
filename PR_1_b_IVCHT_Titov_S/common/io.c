#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <xkeycheck.h>
#include <stdlib.h>
#include "io.h"
#include <time.h>



void printNumberOfWork(int numberOfWork, char letter) {
	printf("Практическое задание %d%c\n", numberOfWork, letter);
}

#pragma region 25
void scanIntNumbers(int mass[], int size)
{

	for (int i = 0; i < size; i++) {
		if (scanInt(&mass[i]) != 1) {
			clearInputBuffer();
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



#pragma region 27

void printCountDublicateNumber(int count)
{
	if (count == 3) {
		printf("Все числа одинаковые.\n");
	}
	else if (count == 2) {
		printf("Два числа одинаковые.\n");
	}
	else {
		printf("Нет одинаковых чисел.\n");
	}
}


void printPutNumberOfMonth() {
	printf("Введите номер месяца:\n");
}

int scanNumberOfMonth() {
	int numberOfMonth = 0;
	if (scanInt(&numberOfMonth) != 1) {
		clearInputBuffer();
	}
	return numberOfMonth;
}

void printMonth(int numberOfMonth) {
	if ((numberOfMonth >= 1 && numberOfMonth <= 2) || numberOfMonth == 12) {
		printf("Зима.\n");
	}
	else if (numberOfMonth >= 3 && numberOfMonth <= 5) {
		printf("Весна.\n");
	}
	else if (numberOfMonth >= 6 && numberOfMonth <= 8) {
		printf("Лето.\n");
	}
	else if (numberOfMonth >= 9 && numberOfMonth <= 11) {
		printf("Осень.\n");
	}
	else {
		printf("Неверный номер месяца.\n");
	}
}
#pragma endregion 




