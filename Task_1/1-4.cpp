/*
Дан целочисленный массив размера N. Вывести вначале все содержащиеся в данном массиве
четные числа в порядке возрастания их индексов, а затем – все нечетные числа в порядке
убывания их индексов.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, sum = 0;
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

    for (int i = 0; i < N; i++)
        if (str[i] % 2 == 0)
            cout << i + 1 << ". " << str[i] << endl;

    for (int i = 0; i < N; i++)
        if (str[i] % 2 != 0)
            cout << i + 1 << ". " << str[i] << endl;

    return 0;
}
