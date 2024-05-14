#include "Library.h"
#include "func.h"

int* transformArray(int* arr, int size) 
{
    int* temp = new int[size]; // ������� ��������� ������
    // �������� ��������, ������� � ������ ��������, � ������ ���������� �������
    int index = 0;

    for (int i = 0; i < size; i += 2)
    {
        temp[index++] = arr[i];
    }
    // �������� ��������, ������� � �������� ��������, � ����� ���������� �������
    for (int i = 1; i < size; i += 2) 
    {
        temp[index++] = arr[i];
    }
    // �������� ���������� ���������� ������� ������� � �������� ������
    for (int i = 0; i < size; ++i) 
    {
        arr[i] = temp[i];
    }

    return temp;
}