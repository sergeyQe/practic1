#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "month.h"

struct monthOfYear* listOfMonth()
{
	static struct monthOfYear months[] = {
		{"января", 1, 31},
		{"февраля", 2, 28},
		{"марта", 3, 31},
		{"апреля", 4, 30},
		{"мая", 5, 31},
		{"июня", 6, 30},
		{"июля", 7, 31},
		{"августа", 8, 31},
		{"сентября", 9, 30},
		{"октября", 10, 31},
		{"ноября",  11, 30},
		{"декабря", 12, 31}

	};
	return months;
}


struct monthOfYear findNextDay( struct monthOfYear* monthsOfYear, int* massOfDayAndMonth)
{
	int day = massOfDayAndMonth[0];
	int month = massOfDayAndMonth[1];

	if (month < 1 || month>12 ||day<1||day>31|| monthsOfYear[month - 1].countDayInMonth < day) return (struct monthOfYear) { "Неверная дата.",0,0 };
	if (monthsOfYear[month - 1].countDayInMonth == day) {
		if (month == 12) {
			return (struct monthOfYear) { "января", 1, 1 };
		}
		else {
			return (struct monthOfYear) { monthsOfYear[month].name, monthsOfYear[month].numberOfMonth, 1 };
		}
	}


	return (struct monthOfYear) { monthsOfYear[month-1].name, monthsOfYear[month-1].numberOfMonth, day+1 };
}


void printNextDay(struct monthOfYear nextDay)
{
	printf()
}
