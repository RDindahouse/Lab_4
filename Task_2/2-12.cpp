/*
Дана матрица размера M×N.
Найти номер ее строки с наибольшей суммой элементов и вывести данный номер,
а также значение наибольшей суммы
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

    // Вывод количества чисел, которые больше среднего арифметического
    cout << "Result:" << endl;
    int sum = 0, sumtemp;
    int isum = 0;
    for (int i = 0; i < N; i++)
    {
        sumtemp = 0;
        
            for (int j = 0; j < M; j++) // Нахождение среднего арифметического
                sumtemp += arr[i][j];
            if (sumtemp > sum)
            {
                sum = sumtemp;
                isum = i;
            }
    }
    cout << "Row with the highest sum of elements (" << sum << "): " << isum + 1 << endl;

    // Удаление первого массива и уменьшение количества строк массива
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;
    N--;

    cin.get();
    return 0;
}