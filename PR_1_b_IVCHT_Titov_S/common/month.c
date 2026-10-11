#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "month.h"

struct monthOfYear* listOfMonth()
{
	static struct monthOfYear months[] = {
		{"января", 31},
		{"февраля", 28},
		{"марта", 31},
		{"апреля", 30},
		{"мая", 31},
		{"июня", 30},
		{"июля", 31},
		{"августа", 31},
		{"сентября", 30},
		{"октября", 31},
		{"ноября",  30},
		{"декабря", 31}

	};
	return months;
}


struct monthOfYear findNextDay( struct monthOfYear* monthsOfYear, int* massOfDayAndMonth)
{
	int day = massOfDayAndMonth[0];
	int month = massOfDayAndMonth[1];

	if (month < 1 || month>12 ||day<1||day>31|| monthsOfYear[month - 1].day < day) return (struct monthOfYear) { "Неверная дата.",0};
	if (monthsOfYear[month - 1].day == day) {
		if (month == 12) {
			return (struct monthOfYear) { "января", 1};
		}
		else {
			return (struct monthOfYear) { monthsOfYear[month].name,  1 };
		}
	}

	return (struct monthOfYear) { monthsOfYear[month-1].name,  day+1 };
}


void printNextDay(struct monthOfYear nextDay)
{
	if (nextDay.day == 0) {
		printf("%s\n", nextDay.name);
		return;
	}
	printf("Следующий день : %d %s\n", nextDay.day, nextDay.name);
}
