#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "personAge.h"

 struct personAge* fillPerson() {
	static struct personAge persons[] = {
		{"Антон",0 },
		{"Борис",0},
		{"Виктор",0}
	};

	return persons;
}

int findCountOlderPeople(struct personAge* personAge, int size)
{
	int result = 0;
	for (int i = size - 1; i >0; i--) {
		result++;
		if (personAge[i].age > personAge[i - 1].age) {
			return result;
		}

	}

	return ++result;
}

void printOldPersons(struct personAge* personAge, int countPerson, int size)
{
	if (countPerson == 1) {
		printf("%s страше всех.", personAge[size-1].name);
	}
	else if (countPerson == 2) {
		printf("%s и %s старше %sа", personAge[size - 1].name, personAge[size-2].name, personAge[0].name);
	}
	else {
		printf("Все одного возраста");
	}
	printf("\n");
}

void printStructPersons(struct personAge* personAge, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%s\n", personAge[i].name);
		printf("%d\n", personAge[i].age);
	}
}


void scanPeopleAge(struct personAge* persons, int size)
{
	for (int i = 0; i < size; i++) {
		printf("Возраст %sа ", persons[i].name);
		if (scanf("%d", &persons[i].age) != 1) {
			printf("Ошибка ввода\n");
		}
	}
}


int compareStructPersonAge(const void* a, const void* b)
{
	const struct personAge* x = a;
	const struct personAge* y = b;
	return (x->age > y->age) - (x->age < y->age);
}

void sortStruct(struct personAge* personAge, int size)
{
	qsort(personAge, size, sizeof(personAge[0]), compareStructPersonAge);

}