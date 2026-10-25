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


struct monthOfYear findNextDay(struct monthOfYear* monthsOfYear, int* massOfDayAndMonth)
{
	int day = massOfDayAndMonth[0];
	int month = massOfDayAndMonth[1];

	if (!isValidDate(monthsOfYear, day, month)) return (struct monthOfYear) { "Неверная дата.", 0 };
	if (monthsOfYear[month - 1].day == day) {
		if (month == 12) {
			return (struct monthOfYear) { "января", 1 };
		}
		else {
			return (struct monthOfYear) { monthsOfYear[month].name, 1 };
		}
	}

	return (struct monthOfYear) { monthsOfYear[month - 1].name, day + 1 };
}


void printNextDay(struct monthOfYear nextDay)
{
	if (nextDay.day == 0) {
		printf("%s\n", nextDay.name);
		return;
	}
	printf("Следующий день : %d %s\n", nextDay.day, nextDay.name);
}


int daysSinceYearStart(struct monthOfYear* months, int* massOfDayAndMonth) {
	int day = massOfDayAndMonth[0];
	int month = massOfDayAndMonth[1];
	if (!isValidDate(months, day, month)) return 0;
	int countDay = day;
	for (int i = 0; i < month - 1; i++) {
		countDay += months[i].day;
	}
	return countDay;
}


void printDaysUntilNewYear(int daysSinceYearStart)
{
	if (daysSinceYearStart == 0) printf("Неверная дата.");
	else {
		int daysUntilNewYear = 365 - daysSinceYearStart;
		printf("Осталось %d %s до Нового Года.\n", daysUntilNewYear, getDayWord(daysUntilNewYear));
	}
}


int isValidDate(struct monthOfYear* monthsOfYear, int day, int month)
{
	return !(month < 1 || month>12 || day < 1 || day>31 || monthsOfYear[month - 1].day < day);
}


char* getDayWord(int days)
{
	if (days % 100 >= 11 && days % 100 <= 14) return "дней";
	if (days % 10 == 1) return "день";
	if (days % 10 >= 2 && days <= 4) return "дня";
	return "дней";
}
