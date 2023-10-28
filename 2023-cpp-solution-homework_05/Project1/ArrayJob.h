#pragma once
void printArray(int* a, int len);

void printMenu();

void expandArray(int*& a, int& len);

void addElement(int*& a, int& len, int element);

bool indexValid(int index, int len);

void contractArray(int*& a, int& len);

int extractElement(int*& a, int& len, int index);

void bubbleSort(int* a, int n);

void unwrapArray(int*& a, int& len);

int searchMax(int* a, int& len);
int searchMin(int* a, int& len);
void changeMaxMin(int*& a, int& len);

void deleteElement(int*& a, int& len, int& num);
void deleteDuplicate(int*& a, int& len);



void addRandomElements(int*& a, int& tyu, int count);