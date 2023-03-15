/*
Дана матрица размера M×N. 
Удалить столбец, содержащий максимальный элемент матрицы.
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

    // Вывод массива и нахождение максимального элемента и его номера столбца
    int max = arr[0][0];
    int jmax = 0;
    cout << "Source: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(3) << arr[i][j] << "  ";
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                jmax = j;
            }
        }
        cout << endl;
    }

    // Объявление второго двумерного массива
    arr2 = new int *[N];
    for (int i = 0; i < N; i++)
        arr2[i] = new int[M - 1];

    // Заполнение второго массива
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(j < jmax)
                arr2[i][j] = arr[i][j];
            if(j > jmax)
                arr2[i][j - 1] = arr[i][j];
        }
    }

    // Вывод массива
    cout << "Result:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M - 1; j++)
            cout << setw(3) << arr2[i][j] << "  ";

        cout << endl;
    }

    // Удаление первого массива и уменьшение количества столбцов массива
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;
    M--;

    cin.get();
    return 0;
}