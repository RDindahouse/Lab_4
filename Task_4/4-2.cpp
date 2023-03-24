/*
Дан одномерный массив целых чисел.
Выбрать из массива все положительные числа и упорядочить их по возрастанию.
*/
#include <iostream>

using namespace std;

// Сортировка методом выборки
void selectionSort(int arr[], int n) {
    int i, j, minIndex, tmp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i) {
            tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
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
  