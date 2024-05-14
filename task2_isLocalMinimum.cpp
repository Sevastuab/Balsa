#include "Library.h"
#include "func.h"

bool isLocalMinimum(int** matrix, int n, int row, int col) 
{
    // ��������� ������� ������, �����, ����� � ������ 
    int neighbors[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
    int currentValue = matrix[row][col];
    for (int i = 0; i < 4; ++i) 
    {
        int newRow = row + neighbors[i][0];
        int newCol = col + neighbors[i][1];
        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n) 
        {
            if (matrix[newRow][newCol] <= currentValue) 
            {
                return false; // ���� ���� ���� ����� ������ ��� �����, �� ��������� ������� 
            }
        }
    }
    return true; // ���� ��� ������ ������, ��� ��������� ������� 
}