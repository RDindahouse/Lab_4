/*
Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое
элементов массива с номерами от K до L включительно.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N, sum = 0, K, L;
    double C, av;
    do
    {
        cout << "String length = ";
        cin >> N;
        cout << "K(K < L < N) = ";
        cin >> K;
        cout << "L(K < L < N) = ";
        cin >> L;
    } while (N <= 0 || L < K || L > N - 1 || K < 0);

    // Ввод массива
    int *str = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "str(" << i << ") - ";
        cin >> str[i];
    };
    // Среднее арифметическое

    for (int i = K+1; i < L; i++)
    {
        C++;
        sum += str[i];
    }
    av = sum / C;
    cout << "Average: " << av << endl;

    cin.get();
    return 0;
}
