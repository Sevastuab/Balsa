#include "Library.h"
#include "func.h"

// ������� ��� ��������, �������� �� ������ ������� ������
bool isVowel(char c) 
{
    c = tolower(c); // �������� ������ � ������� ��������
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y';
}