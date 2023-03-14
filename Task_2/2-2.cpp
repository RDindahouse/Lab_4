/*
Дана матрица размера M×N. Преобразовать матрицу,
поменяв местами минимальный и максимальный элемент в каждой строке.
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
    int max, min, temp, jmin, jmax;
    for (int i = 0; i < N; i++)
    {
        max = arr[i][0];
        min = max;
        jmax = 0;
        jmin = 0;
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                jmax = j;
            }
            if (arr[i][j] < min){
                min = arr[i][j];
                jmin = j;
            }
        }
        temp = arr[i][jmax];
        arr[i][jmax] = arr[i][jmin];
        arr[i][jmin] = temp;
    }

    // Вывод массива
    cout << endl
         << "Result: " << endl;
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