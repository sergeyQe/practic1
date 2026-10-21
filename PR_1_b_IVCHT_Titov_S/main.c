#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <xkeycheck.h>
#include <stdlib.h>
#include "io.h"              
#include "tasks/tasks.h"     
#include "common/calc.h" 




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
			work25A(numberOfPracticalWord);
			work25B(numberOfPracticalWord);
			work25C(numberOfPracticalWord);
			break;
		case 26:
			work26A(numberOfPracticalWord);
			work26B(numberOfPracticalWord);
			work26C(numberOfPracticalWord);
			break;
		case 27:
			work27A(numberOfPracticalWord);
			work27B(numberOfPracticalWord);
			work27C(numberOfPracticalWord);
			break;
		case 28:
			work28A(numberOfPracticalWord);
			work28B(numberOfPracticalWord);
			work28C(numberOfPracticalWord);
			break;
		case 29:
			work29A(numberOfPracticalWord);
			work29B(numberOfPracticalWord);
			work29C(numberOfPracticalWord);
		case 30:
			work30A(numberOfPracticalWord);
			work30B(numberOfPracticalWord);
			work30C(numberOfPracticalWord);
			break;
		case 31:
			work31A(numberOfPracticalWord);
			work31B(numberOfPracticalWord);
			work31C(numberOfPracticalWord);
			break;
		case 32:
			work32A(numberOfPracticalWord);
			work32B(numberOfPracticalWord);
			work32C(numberOfPracticalWord);
			break;
		case 33:
			//work33A(numberOfPracticalWord);
			//work33B(numberOfPracticalWord);
			work33C(numberOfPracticalWord);
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






