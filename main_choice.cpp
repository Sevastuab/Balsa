#include "Library.h"
#include "func.h"

void choice()
{
    char UserCount = ' ';

    do{
        cout << " ~~~~~~~| Main |~~~~~~~\n";
        cout << "Enter 1,2,3 or 0 \n";
        cout << " 1-onedimensional array \n";
        cout << " 2-twodimensional array \n";
        cout << " 3-working with a file \n";
        cout << " 4-clear the console \n";
        cout << " 0-exit \n";
        cout << "Your choice: ";
        cin >> UserCount;
        switch (UserCount)
        {
        case '0':
            cout << "Exiting...\n";
            break;
        case '1':
            cout << "~~~~~~~| Task 1 |~~~~~~~\n";
            task1();
            break;
        case '2':
            cout << "~~~~~~~| Task 2 |~~~~~~~\n";
            task2();
            break;
        case '3':
            cout << "~~~~~~~| Task 3 |~~~~~~~\n";
            task3();
            break;
        case '4':
            system("cls");
            break;
        default:
            cout << "Error: invalid choice \n";
        }
    } while (UserCount != '0');
    
}