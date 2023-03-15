/*
Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими).
Найти количество слов, которые начинаются и заканчиваются одной и той же буквой.
 */
#include <iostream>
#include <string>

using namespace std;

main()
{
    string str, str2;
    int L, Words = 0;

    // Ввод строки
    cout << "Enter string: ";
    getline(cin >> ws, str);

    // Длина строки
    L = str.length();

    // Количество слов в строке
    if (!isspace(str[0]))
    {
        Words++;
        str2 += str[0];
    }
    for (int i = 1; i < L; i++)
    {
        if (!isspace(str[i]) && isspace(str[i - 1]))
        { // Цикл смотрит парны ли первая буква слова и пробел за ним
            Words++;
            str2 += str[i];
        }
    }

    cout << "String: '" << str2 << "'" << endl;
    cout << "Amount of words in string: " << Words << endl;
}