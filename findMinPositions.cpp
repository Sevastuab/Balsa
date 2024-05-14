#include "Library.h"
#include "func.h"


void findMinPositions(const int* arr, int size, int min) 
{
    cout << "Positions(s) of the minimum elements(s): ";
    int count_min = 0;
    for (int i = 0; i < size; ++i) 
    {
        if (min == arr[i]) 
        { // Если текущий элемент равен минимальному 
            count_min += 1;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "The number of minimum elements: " << count_min << "\n";
}