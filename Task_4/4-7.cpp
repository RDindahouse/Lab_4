/*
Дан одномерный массив целых чисел.
Выбрать из массива все числа кратные 5 и упорядочить их по убыванию
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
    int n = 0;
    const int k = 5;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int *selectedArr = new int[n];
    int selectedCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) {
            selectedArr[selectedCount] = arr[i];
            selectedCount++;
        }
    }

    selectionSort(selectedArr, selectedCount);

    cout << "The sorted numbers divisible by 5 in the array are: " << endl;
    for (int i = 0; i < selectedCount; i++) {
        cout << selectedArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] selectedArr;

    return 0;
}