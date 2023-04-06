/*
Дан одномерный массив целых чисел.
Выбрать из массива все отрицательные числа и упорядочить их по возрастанию.
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
            if (arr[j] < arr[min_idx])
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

    int *selectedArr = new int[n];
    int selectedCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            selectedArr[selectedCount] = arr[i];
            selectedCount++;
        }
    }

    selectionSort(selectedArr, selectedCount);

    cout << "Array of negative numbers sorted in ascending order: ";
    for (int i = 0; i < selectedCount; i++)
        cout << selectedArr[i] << " ";

    delete[] arr;
    delete[] selectedArr;
    
    return 0;
}