/*
Дан массив размера N. Найти два соседних элемента, сумма которых максимальна, и вывести
эти элементы в порядке возрастания их индексов.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, isum, sum = -100;

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
    }
    for (int i = 0; i < N - 1; i++)
    {
        if (str[i] + str[i + 1] > sum)
        {
            sum = str[i] + str[i + 1];
            isum = i;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    cout << isum << " - " << str[isum] << endl
         << isum + 1 << " - " << str[isum + 1] << endl
         << "sum = " << sum << endl;

    return 0;
}