/*
Дан массив A размера N. Найти минимальный элемент
из его элементов с четными номерами: A2, A4, A6, … .
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, min, imin = 1;
    ;
    do
    {
        cout << "String length = ";
        cin >> N;
    } while (N <= 0);

    int *str = new int[N];

    for (int i = 0; i < N; i++)
    {
        cout << "str(" << i + 1 << ") - ";
        cin >> str[i];
    };

    cout << "Source array:" << endl;
    for (int i = 0; i < N; i++)
        cout << str[i] << " ";

    min = str[1];

    for (int i = 1; i < N; i += 2)
    {
        if (str[i] < min)
        {
            min = str[i];
            imin = i;
        }
    }

    cout << endl
         << "Result: " << str[imin] << endl;

    cin.get();
    return 0;
}
