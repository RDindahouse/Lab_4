/*
Дана матрица размера M×N. Для каждой строки матрицы с нечетным номером (1, 3, …) найти
среднее арифметическое ее элементов.
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
    int sum, count;
    double average;
    for (int i = 0; i < N; i++)
    {
        if ((i + 1) % 2 != 0){
        sum = 0;
        for (int j = 0; j < M; j++) // Нахождение среднего арифметического
            sum += arr[i][j];
        average = sum / N;

        count = 0;
        for (int j = 0; j < M; j++)
            if (arr[i][j] > average)
                count++;
        cout << "average of " << i + 1 << " row: " << average << endl;
        }
    }

    // Удаление первого массива и уменьшение количества строк массива
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;
    N--;

    cin.get();
    return 0;
}