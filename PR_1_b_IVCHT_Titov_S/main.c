#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <xkeycheck.h>
#include < stdlib.h >




void work25A();


void printNumberOfWork(int numberOfWork);
void scanNumbers(int mass[], int size);
void printEnterSomeNumbers(int size);
void printNumbersWith(int mass[], int size, char sign);

int sum(int mass[], int size);
int multi(int mass[], int size);
double average(int sum, int size);

int main(void)
{
	SetConsoleOutputCP(1251);
	int numberOfPracticalWord;
	while (1) {
		printf("Практические работы\n");
		printf("Введите номер задачи 25-38\n");
		printf("0 для выхода\n");

		if (scanf("%d", &numberOfPracticalWord) != 1) {
			printf("Это не число\n");
			int c;
			while (((c = getchar()) != '\n' && c != EOF)) {
				continue;
			}
			continue;
		}
		if (numberOfPracticalWord == 0) break;

		switch (numberOfPracticalWord) {
		case 25:
			printNumberOfWork(numberOfPracticalWord);
			work25A();
			break;

		default:
			printf("Практической работы с таким номером нет\n");
		}

		printf("Нажмите 1 для продолжения...\n");
		int x;
		if (scanf("%d", &x) != 1) {
			while ((x = getchar()) != '\n' && x != EOF) {}
		}


	}
	printf("Конец программы");
	return 0;

}

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


void work25A()
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
	printf(")/%d=%.3f", size, average(sum(massForThreeNumbers, size), size));
}

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
