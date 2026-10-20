#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "tasks.h"
#include "io.h" 
#include "calc.h"
#include "personAge.h"
#include "month.h"

#pragma region 25
void work25A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	int size = 3;
	int* massForThreeNumbers = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(massForThreeNumbers, size);
	printNumbersWithSign(massForThreeNumbers, size, "+");
	printf("=%d\n", sum(massForThreeNumbers, size));
	printNumbersWithSign(massForThreeNumbers, size, "*");
	printf("=%d\n", multi(massForThreeNumbers, size));
	printf("(");
	printNumbersWithSign(massForThreeNumbers, size, "+");
	printf(")/%d=%.3f\n", size, average(sum(massForThreeNumbers, size), size));
	freeArray(massForThreeNumbers);
}

void work25B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
	int size = 4;
	double* massForCoordinates = allocateDoubleArray(size);
	printEnterCoordinates('A');
	scanDoubleNumbers(massForCoordinates, 0, 2);
	printEnterCoordinates('B');
	scanDoubleNumbers(massForCoordinates, 2, 4);
	printf("Длина отрезка AB =%.3f \n", segmentLength(massForCoordinates));
	freeArray(massForCoordinates);

}

void work25C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
	int size = 3;
	int threeDigitNumber = generateRandomNumbers();
	printGenerateNumber(threeDigitNumber);
	int* massThreeNumbers = fillReverseNumber(threeDigitNumber, size);
	printf("Его цифры ");
	printNumbersWithSign(massThreeNumbers, size, ", ");
	printf("\n");

}
#pragma endregion

#pragma region 26
void work26A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	int size = 3;
	printEnterSomeNumbers(size);
	int* massForThreeNumbers = allocateIntArray(size);
	scanIntNumbers(massForThreeNumbers, size);
	sortDigitNumbers(massForThreeNumbers, size);
	printMaxIntNumber(findMaxIntNumber(massForThreeNumbers, size));
	freeArray(massForThreeNumbers);
}

void work26B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
	int size = 5;
	printEnterSomeNumbers(size);
	int* massForFiveNumbers = allocateIntArray(size);
	scanIntNumbers(massForFiveNumbers, size);
	sortDigitNumbers(massForFiveNumbers, size);
	printMaxIntNumber(findMaxIntNumber(massForFiveNumbers, size));
	freeArray(massForFiveNumbers);
}

void work26C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
	int size = 3;
	struct personAge* threePersons = fillPerson();
	scanPeopleAge(threePersons, size);
	sortStruct(threePersons, size);
	int countPerson = findCountOlderPeople(threePersons, size);
	printOldPersons(threePersons, countPerson, size);
	freeArray(threePersons);
}

#pragma endregion

#pragma region 27
void work27A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	int size = 3;
	int* massForThreeNumbers = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(massForThreeNumbers, size);
	int count = countDuplicates(massForThreeNumbers, size);
	printCountDublicateNumber(count);
	freeArray(massForThreeNumbers);

}

void work27B(int numberOfWork) {
	printNumberOfWork(numberOfWork, 'B');
	printPutNumberOfMonth();
	int numberOfMonth = scanNumber();
	printSeason(numberOfMonth);
}
void work27C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
	printInputAge();
	printAge(scanNumber());
}

#pragma endregion

#pragma region 28
void work28A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	printPutNumberOfMonth();
	int numberOfMonth = scanNumber();
	const char* month = monthNameByNumber(numberOfMonth);
	const char* season = seasonNameByNumber(numberOfMonth);
	printMonthAndSeason(month, season);
}

void work28B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
	printInputDayAndMonth();
	int size = 2;
	int* massOfDayAndMonth = allocateIntArray(size);
	scanIntNumbers(massOfDayAndMonth, size);
	struct monthOfYear* months = listOfMonth();
	printNextDay(findNextDay(months, massOfDayAndMonth));
	freeArray(massOfDayAndMonth);
}

void work28C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
	printInputDayAndMonth();
	int size = 2;
	int* massOfDayAndMonth = allocateIntArray(size);
	scanIntNumbers(massOfDayAndMonth, size);
	struct monthOfYear* months = listOfMonth();
	printDaysUntilNewYear(daysSinceYearStart(months, massOfDayAndMonth));
	freeArray(massOfDayAndMonth);
}

#pragma endregion

#pragma region 29
void work29A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');

}

void work29B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
}

void work29C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
}

#pragma endregion

void work30A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	int size = 2;
	int* twoNumbers = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(twoNumbers, size);
	printSquareInRange(twoNumbers, size);
	freeArray(twoNumbers);
}

void work30B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
	int size = 2;
	int* twoNumbers = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(twoNumbers, size);
	printMultiResult(twoNumbers, size);
	freeArray(twoNumbers);
}

void work30C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
	int size = 1;
	int* number = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(number, size);
	printf("Сумма %d\n", sumFibonachi(number[0]));
	freeArray(number);
}

#pragma endregion 

#pragma region 31

void work31A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	int size = 1;
	int* number = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(number, size);
	printf("сумма цифр %d\n", sumOfDigits(number[0]));
	freeArray(number);
}

void work31B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
	int size = 1;
	int* number = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(number, size);
	printResultYesOrNo(hasConsecutiveEqualDigits(number[0]));
	freeArray(number);
}

void work31C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
	int size = 1;
	int* number = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(number, size);
	printResultYesOrNo(hasRepeatedDigits(number[0]));
	freeArray(number);
}

#pragma endregion

#pragma region 32

void work32A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	int size = 0;
	int* numbers = findDivisibleWithRemainder(&size);
	printNumbers(numbers, size);
	freeArray(numbers);
}

void work32B(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'B');
	int size = 0;
	int* numbers = findAmstrongNumbersInArray(&size);
	printNumbers(numbers, size);
	freeArray(numbers);
}

void work32C(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'C');
	int size = 1;
	int* number = allocateIntArray(size);
	printEnterSomeNumbers(size);
	scanIntNumbers(number, size);
	int sizeOut = 0;
	int* mass = findAutoMorphNumber(number[0], &sizeOut);
	printSquareNumbers(mass, sizeOut);
}

void work33A(int numberOfWork)
{
	printNumberOfWork(numberOfWork, 'A');
	printInputNumericRange();
	int size = 2;
	int* number = allocateIntArray(size);
	scanIntNumbers(number, size);
	int outSize = 0;
	int* numbers = findSimpleNumbers(number, &outSize);
	printNumbers(numbers, outSize);
	freeArray(numbers);

}

void work33B(int numberOfWork)
{

}

#pragma endregion

#pragma region 33


#pragma endregion