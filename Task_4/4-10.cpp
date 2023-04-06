/*
Дан одномерный массив целых чисел.
Выбрать из массива все числа кратные 3 и упорядочить их по возрастанию.
*/
#include <iostream>
using namespace std;

// Сортировка методом выборки
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
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

    int* arr = new int[n];
    cout << "Enter the elements of the array:" << endl;
    for(int i=0; i<n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 3 == 0) {
            count++;
        }
    }

    int* newArr = new int[count];
    int index = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 3 == 0) {
            newArr[index] = arr[i];
            index++;
        }
    }

    selectionSort(newArr, count);

    cout << "The sorted array of multiples of 3 is: ";
    for(int i=0; i<count; i++) {
        cout << newArr[i] << " ";
    }

    delete[] arr;
    delete[] newArr;

    return 0;
}