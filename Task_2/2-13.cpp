/*
Дана матрица размера M×N.
Перед строкой матрицы, содержащей минимальный элемент матрицы, вставить строку из нулей.
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

    // Поиск минимального числа
    int min = arr[0][0];
    int imin = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                imin = i;
            }

    // Вывод массива
    cout << "Source: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << setw(3) << arr[i][j] << "  ";

        cout << endl;
    }

    // Вывод массива
    cout << "Result:" << endl;
    for (int i = 0; i < N; i++)
    {
        if (i == imin)
        {
            for (int j = 0; j < M; j++)
            {
                cout << setw(3) << 0 << "  ";
            }
            cout << endl;
        }
        for (int j = 0; j < M; j++)
        {
            cout << setw(3) << arr[i][j] << "  ";
        }
        cout << endl;
    }

    // Удаление первого массива и уменьшение количества строк массива
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;
    N--;

    cin.get();
    return 0;
}