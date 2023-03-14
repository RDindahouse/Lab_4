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
    int N, sum = 0, imin, imax;
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

    int min = str[0];
    int max = str[0];
//Нахождение наибольшего и наименьшего и запоминание их индексов 
    for (int i = 0; i < N; i++)
    {
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

    cout << "Min number: " << min << " / Max number: " << max << endl;
//Подсчёт суммы в зависимости от положения наибольшего и наименьшего чисел
    if (imax > imin)
    {
        for (int i = imin; i <= imax; i++)
        {
            sum += str[i];
        }
    }
    else
    {
        for (int i = imax; i <= imin; i++)
        {
            sum += str[i];
        }
    }
    
    cout << "sum: " << sum;

    return 0;
}
