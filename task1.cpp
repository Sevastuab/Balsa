#include "Library.h"
#include "func.h"



void task1() 
{
    int size = 0;
    char UserCount1 = '0';
    int min = 0;
    int* arr = NULL;
    int* temp = NULL;

    cout << "Enter 1, 2 or 3\n";
    cout << "1 - calculate the minimum modulo element of the array. Find "
        "their number and their positions \n";
    cout << "2 - calculate the sum of the modules of the array elements located "
        "after the first element equal to zero. Find the position "
        "of the zero element, after which the sum is found \n";
    cout << "3 - transform the array so that the first half of it contains elements "
        "that were in even positions, and then elements "
        "that were in odd positions (describe the algorithm) \n";
    cout << "Your choice: ";
    cin >> UserCount1;
    
    if (UserCount1 == '1' || UserCount1 == '2' || UserCount1 == '3') 
    {
        cout << "Enter the number of items: ";
        cin >> size;
        while (size <= 0) 
        {
            cout << "Uncorrect size \n";
            cout << "Enter size of array: ";
            cin >> size;
        }

        arr = new int[size];
        for (int i = 0; i < size; ++i) 
        {
            cout << "Item [" << i << "]: ";
            cin >> arr[i];
        }

        min = findMin(arr, size);
        temp = new int[size];
   }
    switch (UserCount1) 
    {
    case '1':
        cout << "Minimum element: " << min << "\n";
        findMinPositions(arr, size, min);
        break;
    case '2':
        processArray(arr, size, min);
        break;
    case '3':
        temp = transformArray(arr, size);
       cout << "Transformed array: ";
        for (int i = 0; i < size; ++i) 
        {
            cout << temp[i] << " ";
        }
        cout << endl;
        break;
    default:
        cout << "Error: invalid choice \n";
        break;
    }

    delete[] arr;
    delete[] temp; // Удаление temp за пределами switch
}