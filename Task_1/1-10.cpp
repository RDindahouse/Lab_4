/*
Дан целочисленный массив размера N. Обнулить все нечетные числа, содержащиеся в массиве. 
Если нечетные числа в массиве отсутствуют, то оставить массив без изменений.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N;
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

    cout << endl
         << "Result:" << endl;
    for (int i = 0; i < N; i++){
        if (str[i] % 2 != 0)
        {
        str[i] = 0;
        cout << str[i]<< " ";
        }
        else
        cout << str[i] << " ";
    }

    return 0;
}
