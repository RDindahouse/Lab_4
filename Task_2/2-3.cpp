/*
Дана матрица размера M×N. Поменять местами строки,
содержащие минимальный и максимальный элементы матрицы.
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

    // Замена наибольшего и наименьшего значения в строках
    int max = arr[0][0], min = arr[0][0], imin = 0, imax = 0;
    int *temp = new int[N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                imax = i;
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                imin = i;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        temp[i] = arr[imax][i];
        arr[imax][i] = arr[imin][i];
        arr[imin][i] = temp[i];
    }

    // Вывод массива
    cout << "Result:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << setw(3) << arr[i][j] << "  ";

        cout << endl;
    }

    // Удаление массива
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;

    cin.get();
    return 0;
}