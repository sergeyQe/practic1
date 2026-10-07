#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <xkeycheck.h>
#include <stdlib.h>
#include "io.h"
#include <time.h>




void printNumberOfWork(int numberOfWork, char letter) {
	printf("ѕрактическое задание %d%c\n", numberOfWork, letter);
}

#pragma region 25
void scanIntNumbers(int mass[], int size)
{

	for (int i = 0; i < size; i++) {
		if (scanInt(&mass[i]) != 1) {
			clearBuffer();
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
	printf("¬ведите %d %s\n", size, result);
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
	printf("¬ведите координаты точки %c:\n", sign);
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


int scanInt(int* value) {
	return scanf("%d", value) == 1;
}

void clearBuffer(void) {
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF) {}
}

#pragma endregion

#pragma region 26
int generateRandomNumbers(void)
{
	return rand() % 900 + 100;
}

void printGenerateNumber(int number)
{
	printf("ѕолучено число \%d.\n", number);
}

void printMaxIntNumber(int number)
{
	printf("ћаксимальное число %d\n", number);
}
#pragma endregion 



#pragma region 27

void printCountDublicateNumber(int count)
{
	if (count == 3) {
		printf("¬се числа одинаковые.\n");
	}
	else if (count == 2) {
		printf("ƒва числа одинаковые.\n");
	}
	else {
		printf("Ќет одинаковых чисел.\n");
	}
}


void printPutNumberOfMonth() {
	printf("¬ведите номер мес€ца:\n");
}

int scanNumber() {
	int number = 0;
	if (scanInt(&number) != 1) {
		clearBuffer();
	}
	return number;
}

void printSeason(int numberOfMonth) {
	if ((numberOfMonth >= 1 && numberOfMonth <= 2) || numberOfMonth == 12) {
		printf("«има.\n");
	}
	else if (numberOfMonth >= 3 && numberOfMonth <= 5) {
		printf("¬есна.\n");
	}
	else if (numberOfMonth >= 6 && numberOfMonth <= 8) {
		printf("Ћето.\n");
	}
	else if (numberOfMonth >= 9 && numberOfMonth <= 11) {
		printf("ќсень.\n");
	}
	else {
		printf("Ќеверный номер мес€ца.\n");
	}
}

void printInputAge(void)
{
	printf("¬ведите возраст: ");
}
void printAge(int age)
{
	if (age <= 0 || age > 120) {
		printf("¬озраст должен быть от 1 до 120\n");
	}
	else if (age % 100 >= 11 && age % 100 <= 14 || age % 10 >= 5 && age % 10 <= 9 || age % 10 == 0) {
		printf("¬ам %d лет.\n", age);
	}
	else if (age % 10 == 1) {
		printf("¬ам %d год.\n", age);
	}
	else {
		printf("¬ам %d года.\n", age);
	}
}

#pragma endregion 


#pragma region 28
const char* monthNameByNumber(int numberOfMonth)
{
	char* month;
	switch (numberOfMonth) {
	case 1:
		month = "€нварь";
		break;
	case 2:
		month = "февраль";
		break;
	case 3:
		month = "март";
		break;
	case 4:
		month = "апрель";
		break;
	case 5:
		month = "май";
		break;
	case 6:
		month = "июнь";
		break;
	case 7:
		month = "июль";
		break;
	case 8:
		month = "август";
		break;
	case 9:
		month = "сент€брь";
		break;
	case 10:
		month = "окт€брь";
		break;
	case 11:
		month = "но€брь";
		break;
	case 12:
		month = "декабрь";
		break;
	default:
		month = "неверный мес€ц";
		break;
	}
	return month;
}


const char* seasonNameByNumber(int numberOfMonth) 
{
	char* season;
	switch (numberOfMonth) {
	case 1:
	case 2:
	case 12:
		season = "зима";
		break;
	case 3:
	case 4:
	case 5:
		season = "весна";
		break;
	case 6:
	case 7:
	case 8:
		season = "лето";
		break;
	case 9:
	case 10:
	case 11:
		season = "осень";
		break;
	default:
		season = "неверный сезон";
		break;
	}
	return season;

}
printMonthAndSeason(const char* month, const char* season)
{
	if (month == "неверный мес€ц") {
		printf("Ќеверный номер мес€ца.\n");
		return;
	}
	printf("Ётот мес€ц Ц %s, врем€ года - %s.\n", month, season);
}

printInputDayAndMonth()
{
	printf("¬ведите день и мес€ц : ");
}

#pragma endregion


