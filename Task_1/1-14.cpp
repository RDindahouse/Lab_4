/*
Дан массив размера N. Поменять местами его минимальный и максимальный элементы.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, imin, imax;
    do
    {
        cout << "String length = ";
        cin >> N;
    } while (N <= 0);

    int *str = new int[N];
    int min = 100;
    int max = -100;
    for (int i = 0; i < N; i++)
    {
        cout << "str(" << i + 1 << ") - ";
        cin >> str[i];
        if (str[i] > max)
        {
            max = str[i];
            imax = i;
        }
        if (str[i] < min)
        {
            min = str[i];
            imin = i;
        }
    }

    cout << "Min number: " << imin << " / Max number: " << imax << endl
         << "Source string: " << endl;

    for (int i = 0; i < N; i++)
        cout << str[i] << " ";

    str[imin] = max;
    str[imax] = min;

    cout << endl
         << "Result:" << endl;

    for (int i = 0; i < N; i++)
        cout << str[i] << " ";

    return 0;
}
