/*
Дан одномерный массив целых чисел.
Выбрать из массива все числа на четных позициях и упорядочить эти числа по возрастанию.
*/
#include <iostream>
using namespace std;

// Сортировка пузырьком
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    for (int i = 1; i < n; i += 2)
    {
        selectedArr[selectedCount] = arr[i];
        selectedCount++;
    }

    bubbleSort(selectedArr, selectedCount);

    cout << "The sorted array of even positioned numbers is: ";
    for (int i = 0; i < selectedCount; i++)
        cout << selectedArr[i] << " ";

    delete[] arr;
    delete[] selectedArr;
    
    return 0;
}
