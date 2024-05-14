#include "Library.h"
#include "func.h"

int findMin(const int* arr, int size) 
{
    int min = abs(arr[0]);
    for (int i = 1; i < size; ++i) 
    {
        if (min >= abs(arr[i])) 
        { // ������� ����������� ������� 
            min = arr[i];
        }
    }
    return min;
}