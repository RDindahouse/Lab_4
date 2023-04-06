/*
Дан одномерный массив целых чисел. 
Выбрать из массива все числа меньше 15 и упорядочить их по убыванию.
*/
#include <iostream>

using namespace std;

// Сортировка методом выборки
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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

    int k = 15;
    int *tempArr = new int[n];
    int tempArrIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < k) {
            tempArr[tempArrIndex] = arr[i];
            tempArrIndex++;
        }
    }

    selectionSort(tempArr, tempArrIndex);

    cout << "The sorted array is:\n";
    for (int i = 0; i < tempArrIndex; i++) {
        cout << tempArr[i] << " ";
    }

    delete[] arr;
    delete[] tempArr;

    return 0;
}