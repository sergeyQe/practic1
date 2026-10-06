#ifndef CALC_H
#define CALC_H

#pragma region 25
int sum(int mass[], int size);
int multi(int mass[], int size);
double average(int sum, int size);
double segmentLength(double coordinates[]);
int mod(int number);
#pragma endregion

#pragma region 26
int* fillReverseNumber(int number, int size);
void sortDigitNumbers(int* mass, int size);
int compareInt(const void* a, const void* b);
int findMaxIntNumber(int* mass, int size);
#pragma endregion

#pragma region 27
int countDuplicates(int mass[], int size);
#pragma endregion
#endif