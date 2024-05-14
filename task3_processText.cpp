#include "Library.h"
#include "func.h"

void processText(ifstream& file)
{
    char* word = new char[256];
    int wordlength = 0;
    char c;
    int all = 0;
    int count = 0;

    while (file.get(c)) 
    {
        if (isalpha(c)) 
        { // ���� ������ �������� ������
            word[wordlength++] = c; 
            word[wordlength] = '\0';
        }
        else 
        { // ���� ������ �� �������� ������
            if (wordlength>0) 
            {// ���������, ���������� �� � ������������� �� ����� �� ������� �����
                all += 1;
                if (isVowel(word[0]) && isVowel(word[wordlength-1]))
                {
                    cout << word << std::endl;
                    count += 1;
                }
                word[0]='\0'; // ������� ������� �����
                wordlength = 0;
            }
        }
    }
    // ��������� ��������� �����
    if (wordlength>0)
    {
        if (isVowel(word[0]) && isVowel(word[wordlength -1]))
        {
            std::cout << word << endl;
        }
    }
    if (all == 0) 
    {
        cout << "There is no one words.\n";
    }
    else if (count == 0) 
    {
        cout << "There is no one suitable words.\n";
    }
    delete[] word;
}