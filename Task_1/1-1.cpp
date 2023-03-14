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
    } while (N <= 0 && K <= L && K > 0 && L <= N);
   
    // Ввод массива
    int *str = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "str(" << i << ") - ";
        cin >> str[i];
    };
    // Среднее арифметическое
    for (K; K <= L; K++)
    {
        C++;
        sum += str[K];
    }
    av = sum / C;
    cout << "Average: " << av << endl;

    return 0;
}
