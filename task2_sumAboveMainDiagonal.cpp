#include "Library.h"
#include "func.h"

int sumAboveMainDiagonal(int** matrix, int n)
{
    int sum = 0;

    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        { // j ���������� � i + 1, ����� �� �������� ������� ��������� 
            sum += abs(matrix[i][j]); // ������� ������ �������� � ��������� � ����� 
        }
    }

    return sum;
}