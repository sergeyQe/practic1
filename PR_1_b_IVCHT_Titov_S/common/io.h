#ifndef IO_H
#define IO_H
void printNumberOfWork(int numberOfWork, char letter);
#pragma region 25
void scanIntNumbers(int mass[], int size);
void printEnterSomeNumbers(int size);
void printNumbersWithSign(int mass[], int size, const char* sign);
void printEnterCoordinates(char sign);
void scanDoubleNumbers(double mass[],  int start, int end);
#pragma endregion

#pragma region 26
int generateRandomNumbers(void);
void printGenerateNumber(int number);
void printMaxIntNumber(int number);
const char* numberWordForm(int size);
#pragma endregion

#pragma region 27
void printCountDublicateNumber(int count);

#pragma end region





#endif