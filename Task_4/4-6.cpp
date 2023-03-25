/*
Дан одномерный массив целых чисел. 
Выбрать из массива все числа больше 10 и упорядочить их по возрастанию
*/
#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n = 0;
    const int k = 10;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *selectedArr = new int[n];
    int selectedCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            selectedArr[selectedCount] = arr[i];
            selectedCount++;
        }
    }

    // Sorting selected numbers in ascending order using insertion sort
    insertionSort(selectedArr, selectedCount);

    cout << "The sorted numbers greater than 10 in the array are: " << endl;
    for (int i = 0; i < selectedCount; i++) {
        cout << selectedArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] selectedArr;

    return 0;
}