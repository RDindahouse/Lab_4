/*
Дан целочисленный массив размера N. Увеличить все четные числа, содержащиеся в массиве,
на заданное число. Если четные числа в массиве отсутствуют, то оставить массив без изменений.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, M;
    do
    {
        cout << "String length = ";
        cin >> N;
    } while (N <= 0);
    cout << "Add ";
    cin >> M;

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
        if (str[i] % 2 == 0)
        {
        str[i] += M;
        cout << str[i]<< " ";
        }
        else
        cout << str[i] << " ";
    }

    cin.get();
    return 0;
}
