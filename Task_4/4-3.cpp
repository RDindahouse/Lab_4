/*
Дан одномерный массив целых чисел. 
Выбрать из массива все положительные числа и упорядочить их по убыванию.
*/
#include <iostream>

using namespace std;

// Сортировка методом выборки
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        swap(arr[maxIdx], arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int *positiveArr = new int[n];
    int positiveCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveArr[positiveCount] = arr[i];
            positiveCount++;
        }
    }

    selectionSort(positiveArr, positiveCount);

    cout << "The sorted positive numbers in the array are: " << endl;
    for (int i = 0; i < positiveCount; i++) {
        cout << positiveArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] positiveArr;

    return 0;
}