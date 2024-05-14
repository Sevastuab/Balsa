#include "Library.h"
#include "func.h"

int task3() 
{
    const int mfn = 256;
    char filename[mfn];

    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) 
    {
        cout  << "Error opening the file." << endl;
        return 1; // Возвращаем код ошибки
    }

    processText(file);

    return 0;
}