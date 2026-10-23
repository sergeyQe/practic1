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

#pragma region 29
int A29A(double x, double y);
int B29A(double x, double y);
int A29B(double x, double y);
int B29B(double x, double y);
int C29B(double x, double y);
int A29C(double x, double y);
int B29C(double x, double y);
#pragma endregion

#pragma region 30
int multiTwoNumbers(int x, int y);
int multiWithPlus(int x, int y);
int sumFibonachi(int x);
#pragma endregion

#pragma region 31
int sumOfDigits(int number);
int hasRepeatedDigits(int number);
#pragma endregion 

#pragma region 32
int* newMassIntLength(int* mass, int sizeOld, int sizeNew);
int* findDivisibleWithRemainder(int* out_size);
int* findAmstrongNumbersInArray(int* size);
int IsAmstrongNumber(int number, int sizeNumber);
int* findAutoMorphNumber(int number, int* outSize);
int IsAutoMorph(int number, int square);
int sizeOfDigitNumber(int number);
#pragma endregion

#pragma region 33
int* findSimpleNumbers(int* mass, int* outSize);
int IsSimpleNumber(int number);
void findPurchaseOptions();
int* findSelfDividingNumbers(int number, int* outSize);
int IsSelfDividingNumber(int num);
#pragma endregion

#pragma region 34
int* findDigitInNumbers(int number, int* outSize);
void reverseArray(int* mass, int size);
char* newMassCharLength(char* mass, int sizeOld, int sizeNew);
char* convertToRoman(int number, int* outSize);
#pragma endregion

#pragma region 35
void simplifyFraction(int * mass);

#pragma endregion 
#endif