/*
Дана матрица размера M×N. Зеркально отразить ее элементы относительно вертикальной оси
симметрии матрицы (при этом поменяются местами столбцы с номерами 1 и N, 2 и N – 1 и т. д.).
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

    // Отражение массива по вертикальной оси симметрии
    int temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M / 2; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[i][M - j - 1];
            arr[i][M - j - 1] = temp;
        }
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