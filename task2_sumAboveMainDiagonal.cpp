#include "Library.h"
#include "func.h"

int sumAboveMainDiagonal(int** matrix, int n)
{
    int sum = 0;

    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        { // j начинаетс€ с i + 1, чтобы не включать главную диагональ 
            sum += abs(matrix[i][j]); // —читаем модуль элемента и добавл€ем к сумме 
        }
    }

    return sum;
}