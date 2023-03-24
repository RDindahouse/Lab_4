/*
Дан одномерный массив целых чисел. Выбрать из массива все четные числа и упорядочить
их по возрастанию.
*/
#include <iostream>

using namespace std;

// Сортировка методом вставки
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
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int *evenArr = new int[n];
    int evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        }
    }

    insertionSort(evenArr, evenCount);

    cout << "The sorted even numbers in the array are: " << endl;
    for (int i = 0; i < evenCount; i++) {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] evenArr;

    return 0;
}