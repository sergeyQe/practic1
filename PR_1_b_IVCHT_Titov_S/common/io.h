#ifndef IO_H
#define IO_H
void printNumberOfWork(int numberOfWork, char letter);
#pragma region 25
void scanIntNumbers(int mass[], int size);
void scanLongNumbers(long mass[], int size);
void printEnterSomeNumbers(int size);
void printNumbersWithSign(int mass[], int size, const char* sign);
void printEnterCoordinates(char sign);
void scanDoubleNumbers(double mass[],  int start, int end);
int scanInt(int* value);
int scanLong(long* value);
void clearBuffer(void);
int* allocateIntArray(int size);
double* allocateDoubleArray(int size);
long* allocateLongArray(int size);
void freeArray(void* mass);
#pragma endregion



#pragma region 26
int generateRandomNumbers(void);
void printGenerateNumber(int number);
void printMaxIntNumber(int number);
const char* numberWordForm(int size);
#pragma endregion



#pragma region 27
void printCountDublicateNumber(int count);
void printPutNumberOfMonth();
int scanNumber();
void printSeason(int numberOfMonth);
void printInputAge(void);
void printAge(int age);
#pragma endregion



#pragma region 28
const char* monthNameByNumber(int numberOfMonth);
const char* seasonNameByNumber(int numberOfMonth);
printMonthAndSeason(const char* month, const char* season);
printInputDayAndMonth();
#pragma endregion



#pragma region 30
int checkIsValidNumbers(int* mass, int size);
void printSquareInRange(int* mass, int size);
void printMultiResult(int* mass, int size);
#pragma endregion



#pragma region 31
int hasConsecutiveEqualDigits(int number);
void printResultYesOrNo(int number);
#pragma endregion



#pragma region 32
void printNumbers(int* mass, int size, char sign);
#pragma endregion



#pragma region 33
void printSquareNumbers(int* numbers, int size);
void printInputNumericRange();
void printBox(int x, int y, int z, int countX, int countY, int countZ);
#pragma endregion



#pragma region 34
void printSigns(int number, char sing);
void printChars(char* mass,int size, char sing);
char* allocateCharArray(int size);
#pragma endregion



#pragma region 35
void printEnterFractionNumber();
void printFractionNumber(int * mass);
void printNOD(long num1,long num2, long divizor);
void printNOK(long num1, long num2, long multiple);
#pragma endregion 



#pragma region 36
void printReverseNumber(int* mass, int size, char sign);
#pragma endregion



#pragma region 37
void printIsPerfectNumber(int isPerfect, int number);
void printIsRelativelyPrime(int* mass, int isRealitivePrime);
void printisHyperPrime(int*mass, int isRealitivePrime);
#pragma endregion

#endif