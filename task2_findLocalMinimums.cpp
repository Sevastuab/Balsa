#include "Library.h"
#include "func.h"

void findLocalMinimums(int** matrix, int n)
{
    int localMinimumCount = 0;

    // Проходим по всем элементам массива 
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (isLocalMinimum(matrix, n, i, j))
            {
                localMinimumCount++;
                cout << "Local minimum: " << matrix[i][j]
                    << " (row " << i << ", col " << j << ")" << std::endl;
            }
        }
    }
    if (localMinimumCount == 0)
    {
        cout << "There is no one local minima. \n";
    }
    else
    {
        cout << "The total number of local minima: " << localMinimumCount << std::endl;
    }
}