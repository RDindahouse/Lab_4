/*
Дан массив размера N. Найти номера тех элементов массива, которые больше своего правого
соседа, и количество таких элементов. Найденные номера выводить в порядке их возрастания.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, m = 0;
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

    cout << endl;

    for (int i = 0; i < N - 1; i++)
    {
        if (str[i] > str[i + 1])
        {
            cout << "str(" << i + 1 << ") - " << str[i] << endl;
            m++;
        }
    }
    cout << "Total: " << m << endl;

    return 0;
}
