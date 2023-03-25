/*
Дан одномерный массив целых чисел. 
Выбрать из массива все числа больше заданного числа k и упорядочить их по убыванию.
*/
#include <iostream>

using namespace std;

// Сортировка методом выборки
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    int *selectedArr = new int[n];
    int selectedCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            selectedArr[selectedCount] = arr[i];
            selectedCount++;
        }
    }

    selectionSort(selectedArr, selectedCount);

    cout << "The sorted numbers greater than k in the array are: " << endl;
    for (int i = 0; i < selectedCount; i++) {
        cout << selectedArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] selectedArr;

    return 0;
}