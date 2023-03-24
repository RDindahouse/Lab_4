/*
Дана непустая строка S и целое число N (> 0). Вывести строку, содержащую символы строки
S, между которыми вставлено по N символов «*» (звездочка)
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    int N;

    // Ввод строки и числа N
    cout << "Enter a string S: ";
    getline(cin, S);
    cout << "Enter an N: ";
    cin >> N;

    // Вывод строки с звездочками
    for (int i = 0; i < S.length(); i++) {
        cout << S[i];
        if ((i+1) % N == 0 && i != S.length()-1) {
            cout << "*";
        }
    }

    return 0;
}