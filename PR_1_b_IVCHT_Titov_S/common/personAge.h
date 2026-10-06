#ifndef PERSON_AGE_H
#define PERSON_AGE_H
struct personAge {
    char name[32];
    int  age;
};

int compareStructPersonAge(const void* a, const void* b);
void sortStruct(struct personAge* arr, int size);
void scanPeopleAge(struct personAge* personAge, int size);
struct personAge* fillPerson();
int findCountOlderPeople(struct personAge* personAge, int size);
void printOldPersons(struct personAge* personAge, int countPerson, int size);
void printStructPersons(struct personAge* personAge, int size);

#endif 