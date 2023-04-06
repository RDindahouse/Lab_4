/*
Дан одномерный массив целых чисел.
Выбрать из массива все двузначные числа и упорядочить их по возрастанию.
*/
#include <iostream>
using namespace std;

// Сортировка методом вставки
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n + 1];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    int *selectedArr = new int[n + 1];
    int selectedCount = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= 10 && arr[i] <= 99)
        {
            selectedArr[selectedCount] = arr[i];
            selectedCount++;
        }
    }

    insertionSort(selectedArr, selectedCount);

    cout << "The sorted array of two-digit numbers is: ";
    for (int i = 0; i < selectedCount; i++)
        cout << selectedArr[i] << " ";

    delete[] arr;
    delete[] selectedArr;

    return 0;
}