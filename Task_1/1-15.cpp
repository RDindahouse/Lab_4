/*
Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N,
первый элемент которого равен A, второй равен B, а каждый последующий элемент равен
сумме всех предыдущих
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, sum, A, B;
    double C, av;
    do
    {
        cout << "String length = ";
        cin >> N;
    } while (N < 2);
    int *str = new int[N];

    cout << "A = ";
    cin >> A;
    str[0] = A;
    cout << "B = ";
    cin >> B;
    str[1] = B;
    sum = A + B;

    for (int i = 2; i < N; i++)
    {
        str[i] = sum;
        sum += str[i];
    }

    for (int i = 0; i < N; i++)
        cout << str[i] << " ";
   

    return 0;
}
