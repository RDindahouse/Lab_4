/*
Дана целочисленная матрица размера M×N. Найти номер последней из ее строк, содержащих
только четные числа. Если таких строк нет, то вывести 0.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int **arr;
    int M, N;

    // Размер массива
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter M: ";
    cin >> M;

    // Объявление двумерного массива
    arr = new int *[N];
    for (int i = 0; i < N; i++)
        arr[i] = new int[M];

    // Заполнение массива
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cout << "(" << i + 1 << "," << j + 1 << "): ";
            cin >> arr[i][j];
        }

    // Вывод массива
    cout << "Source: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << setw(3) << arr[i][j] << "  ";

        cout << endl;
    }

    // Поиск строки с чётными числами посредством флага
    int R = 0;
    bool odd;
    for (int i = 0; i < N; i++)
    {
        odd = 1;
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] % 2 != 0)
                odd = 0;
        }
        if (odd)
        {
            R = i;
        }
    }

    cout << "Row that contains only odd numbers - " << R + 1;

    // Удаление массива
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;

    cin.get();
    return 0;
}