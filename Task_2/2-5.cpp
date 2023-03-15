/*
Дана матрица размера M×N.
Удалить строку, содержащую минимальный элемент матрицы.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int **arr, **arr2;
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

    // Вывод массива и нахождение минимального элемента и его номера строки
    int min = arr[0][0];
    int imin = 0;
    cout << "Source: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(3) << arr[i][j] << "  ";
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                imin = i;
            }
        }
        cout << endl;
    }

    // Объявление второго двумерного массива
    arr2 = new int *[N - 1];
    for (int i = 0; i < N - 1; i++)
        arr2[i] = new int[M];

    // Заполнение второго массива
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(i < imin)
                arr2[i][j] = arr[i][j];
            if(i > imin)
                arr2[i-1][j] = arr[i][j];
        }
    }

    // Вывод массива
    cout << "Result:" << endl;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < M; j++)
            cout << setw(3) << arr2[i][j] << "  ";

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