#include "Library.h"
#include "func.h"

void processArray(const int* arr, int size, int min) 
{
    int count_min = 0;
    int summa_after_zero = 0;
    int flag = 0;
    int inicial_zero = size;

    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] == 0 && i < inicial_zero) 
        { // ���� ������� ������� ����� ���� � �� ���������� ������ ���� ������ ����� 
            inicial_zero = i;
        }
        if (i > inicial_zero) 
        { // ���� ������� ������ ������ ������� ������� ���� 
            summa_after_zero += arr[i];
        }
        if (arr[i] == 0) 
        { // ����, ���� ����� ���
            flag += 1;
        }
    }

    cout << endl;

    if (size - inicial_zero == 1) 
    { // ���� ����� ������� ������������ ���� �� �������� ��������� 
        cout << "The amount cannot be found, since 0 is the last one \n";
        cout << "Position of inicial zero: " << inicial_zero << "\n";
    }
    else if (flag == 0) 
    { // ���� ��� 0
        cout << "The amount cannot be found because 0 was not found \n";
    }
    else if (size - inicial_zero == 2) 
    { // ���� ����� ������� ������������ ���� ������� ����� ���� ������� 
        cout << "The amount cannot be found, since 0 is the penultimate one \n";
        cout << "Position of inicial zero: " << inicial_zero << "\n";
    }
    else 
    {
        cout << "The amount after the first found 0: " << summa_after_zero<<"\n";
        cout << "Position of inicial zero: " << inicial_zero << "\n";
    }
    
}