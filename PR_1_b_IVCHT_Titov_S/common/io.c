#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <xkeycheck.h>
#include <stdlib.h>
#include "io.h"

void printNumberOfWork(int numberOfWork) {
	printf("Практическое задание %d\n", numberOfWork);
}


void scanNumbers(int mass[], int size)
{
	printEnterSomeNumbers(size);
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


