#include "Library.h"
#include "func.h"


void task2()
{
    char UserCount2 = '0';
    int n=0;
    cout << "Enter 1 or 2\n";
    cout << "1-calculate the number and coordinates of local minima  \n";
    cout << "2-calculate the sum of the modules of the elements located above the main diagonal. \n";
    cout << "Your choice: ";
    cin >> UserCount2;
    if (UserCount2 == '1' || UserCount2 == '2') 
    {
        cout << "Enter the size of the square array NxN: ";
        cin >> n;
        while (n <= 1)
        {
            cout << "Uncorrect size \n";
            cout << "Enter the number of items: ";
            cin >> n;
        }
    }

    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new int[n];

    if (UserCount2 == '1' || UserCount2 == '2') 
    {
        cout << "Enter the array elements: \n";
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << "Item [" << i << "-" << j << "]: ";
                cin >> matrix[i][j];
            }
        }
    }
    switch (UserCount2)
    {
    case '1':
        findLocalMinimums(matrix, n);
        break;
    case '2':
        cout << "The sum of the modules of the elements above the main diagonal: " << sumAboveMainDiagonal(matrix, n) << endl;
        break;
    default:
        cout << "Error: invalid choice \n";
        break;
    }

    for (int i = 0; i < n; ++i)
        delete matrix[i];
    delete[] matrix;
}