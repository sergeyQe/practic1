#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <xkeycheck.h>
#include <stdlib.h>
#include "io.h"

void printNumberOfWork(int numberOfWork, char letter) {
	printf("Практическое задание %d%c\n", numberOfWork, letter);
}


void scanIntNumbers(int mass[], int size)
{
	
	for (int i = 0; i < size; i++) {
		if (scanf("%d", &mass[i]) != 1) {
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF) {}
		}
	}
}


void printEnterSomeNumbers(int size)
{
	printf("Введите %d число(ел\\ла)\n", size);
}


void printNumbersWith(int mass[], int size, char sign)
{
	for (int i = 0; i < size - 1; i++) {
		printf("%d%c", mass[i], sign);
	}
	printf("%d", mass[size - 1]);

}

void printEnterCoordinates(char sign)
{
	printf("Введите координаты точки %c:\n", sign);
}


void scanDoubleNumbers(double mass[],  int start, int end)
{
	for (int i = start; i < end; i++) {
		if (scanf("%lf", &mass[i]) != 1) {
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF) {}
		}
	}
}


