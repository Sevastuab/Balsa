#include "Library.h"
#include "func.h"

// Функция для проверки, является ли символ гласной буквой
bool isVowel(char c) 
{
    c = tolower(c); // Приводим символ к нижнему регистру
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y';
}