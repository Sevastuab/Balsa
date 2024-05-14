#include "Library.h"
#include "func.h"

int* transformArray(int* arr, int size) 
{
    int* temp = new int[size]; // —оздаем временный массив
    //  опируем элементы, сто€щие в четных позици€х, в начало временного массива
    int index = 0;

    for (int i = 0; i < size; i += 2)
    {
        temp[index++] = arr[i];
    }
    //  опируем элементы, сто€щие в нечетных позици€х, в конец временного массива
    for (int i = 1; i < size; i += 2) 
    {
        temp[index++] = arr[i];
    }
    //  опируем содержимое временного массива обратно в исходный массив
    for (int i = 0; i < size; ++i) 
    {
        arr[i] = temp[i];
    }

    return temp;
}