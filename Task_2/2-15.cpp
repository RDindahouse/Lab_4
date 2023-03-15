/*
Дана матрица размера M×N. Поменять местами столбец с номером 1 и последний из столбцов,
содержащих только положительные элементы. Если требуемых столбцов нет, то вывести матрицу без изменений.
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

    // Поиск столбца с положительными числами посредством флага
    int R = 0;
    bool Positive;
    for (int j = 0; j < N; j++)
    {
        Positive = 1;
        for (int i = 0; i < M; i++)
        {
            if (arr[i][j] < 0)
                Positive = 0;
        }
        if (Positive)
        {
            R = j;
        }
    }

    // Замена столбцов и вывод массива
    cout << "Result:" << endl;
    int temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (j == 0)
            {
                temp = arr[i][j];
                arr[i][j] = arr[i][R];
                arr[i][R] = temp;
            }
            cout << setw(3) << arr[i][j] << "  ";
        }
        cout << endl;
    }

    // Удаление массива
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;

    cin.get();
    return 0;
}