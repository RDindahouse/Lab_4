/*
Дан одномерный массив целых чисел.
Выбрать из массива все числа кратные заданному числу k и упорядочить их по убыванию.
*/
#include <iostream>
using namespace std;

// Сортировка методом выборки
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] > arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
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

    int k;
    cout << "Enter a number k: ";
    cin >> k;

    int *selectedArr = new int[n];
    int selectedCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k == 0)
        {
            selectedArr[selectedCount] = arr[i];
            selectedCount++;
        }
    }

    selectionSort(selectedArr, selectedCount);

    cout << "The sorted array of multiples of " << k << "  is: ";
    for (int i = 0; i < selectedCount; i++)
        cout << selectedArr[i] << " ";

    delete[] arr;
    delete[] selectedArr;
    
    return 0;
}