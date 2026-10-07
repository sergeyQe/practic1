#ifndef MONTH_H
#define MONTH_H

struct monthOfYear {
	char name[32];
	int numberOfMonth;
	int countDayInMonth;
};

struct monthOfYear* listOfMonth();
struct monthOfYear findNextDay(const struct monthOfYear month,int*massOfDayAndMonth);
void printNextDay(struct monthOfYear nextDay);

#endif 
