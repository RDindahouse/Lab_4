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
    int N, sum = 0, imax = 0;
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
    
    int max = str[0];

    for (int i = 0; i < N; i++)
    {
        if (str[i] > max) {
            max = str[i];
            imax = i;
        }
    };

    int mult = 1;
    for (int i = imax + 1; i < N; i++)
    {
        mult *= str[i];
    }

    cout << "Result: " << mult << endl;    

    return 0;
}
