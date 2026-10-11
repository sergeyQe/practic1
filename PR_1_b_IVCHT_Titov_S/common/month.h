#ifndef MONTH_H
#define MONTH_H

struct monthOfYear {
	char* name;
	int day;
};

struct monthOfYear* listOfMonth();
struct monthOfYear findNextDay( struct monthOfYear *months,int*massOfDayAndMonth);
void printNextDay(struct monthOfYear nextDay);

#endif 
