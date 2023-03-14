/*
Дан массив размера N. Найти сумму всех элементов массива, расположенных между его ми-
нимальным и максимальным элементами, включая минимальный и максимальный элементы.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, imin, imax;
    cout << "String length = ";
    cin >> N;
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
    {
        cout << str[i] << " ";
    }
    cout << endl
         << "Result:" << endl;

    if (imin < imax)
    {
        for (int i = imin + 1; i < imax; i++)
        {
            str[i] = 0;
        }
    }
    else
    {
        for (int i = imax + 1; i < imin; i++)
        {
            str[i] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}
