#pragma once
#include "Library.h"


//Main_Choice
int main();
void choice();

//Task1
void task1();
int* transformArray(int* arr, int size); 
void processArray(const int* arr, int size, int min);
void findMinPositions(const int* arr, int size, int min);
int findMin(const int* arr, int size);

//Task2
void task2(); 
void findLocalMinimums(int** matrix, int n);
bool isLocalMinimum(int** matrix, int n, int row, int col);
int sumAboveMainDiagonal(int** matrix, int n);

//Task3
int task3(); 
bool isVowel(char c);
void processText(ifstream& file);


