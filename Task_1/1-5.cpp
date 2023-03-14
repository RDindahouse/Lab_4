/*
Дан массив A размера N. Вывести вначале его элементы с четными номерами (в порядке возрастания номеров),
а затем – элементы с нечетными номерами (также в порядке возрастания номеров).
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

    for (int i = 1; i < N; i += 2)
        cout << i + 1 << ". " << str[i] << endl;

    for (int i = 0; i < N; i += 2)
        cout << i + 1 << ". " << str[i] << endl;

    return 0;
}
