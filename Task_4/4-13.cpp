/*
Дан одномерный массив целых чисел.
Выбрать из массива все числа на нечетных позициях и упорядочить их по убыванию.
*/
#include <iostream>
using namespace std;

// Сортировка методом выборки
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int max_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] > arr[max_idx])
                max_idx = j;
        swap(arr[max_idx], arr[i]);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int *selectedArr = new int[n / 2];
    int selectedCount = 0;
    for (int i = 0; i < n; i += 2)
    {
        selectedArr[selectedCount] = arr[i];
        selectedCount++;
    }

    selectionSort(selectedArr, selectedCount);

    cout << "The sorted array of elements on odd positions is: ";
    for (int i = 0; i < selectedCount; i++)
        cout << selectedArr[i] << " ";

    delete[] arr;
    delete[] selectedArr;

    return 0;
}