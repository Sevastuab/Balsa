#include "Library.h"
#include "func.h"

int findMin(const int* arr, int size) 
{
    int min = abs(arr[0]);
    for (int i = 1; i < size; ++i) 
    {
        if (min >= abs(arr[i])) 
        { // Находим минимальный элемент 
            min = arr[i];
        }
    }
    return min;
}