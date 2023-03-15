/*
Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими).
Найти количество слов в строке.
 */
#include <iostream>
#include <string>

using namespace std;

main()
{
    string str;
    int L, Words = 0;

    // Ввод строки
    cout << "Enter string: ";
    getline(cin >> ws, str);
    
    // Длина строки
    L = str.length();

    // Количество слов в строке
    if (!isspace(str[0]))
        Words++;
    for (int i = 1; i < L; i++)
    {
        if (!isspace(str[i]) && isspace(str[i-1]))
        {   // Цикл смотрит парны ли первая буква слова и пробел за ним
            Words++;
        }
    } 
    

    cout << "String: '" << str << "'" << endl;
    cout << "Amount of words in string: " << Words << endl;
}