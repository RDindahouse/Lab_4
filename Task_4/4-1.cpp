/*
Дан одномерный массив целых чисел.
Выбрать из массива все нечетные числа и упорядочить их по убыванию.
*/
#include <iostream>

using namespace std;

// Сортировка методом вставки
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int *oddArr = new int[n];
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    insertionSort(oddArr, oddCount);

    cout << "The sorted odd numbers in the array are: " << endl;
    for (int i = 0; i < oddCount; i++) {
        cout << oddArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] oddArr;

    return 0;
}