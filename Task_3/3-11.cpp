/*
Дана строка-предложение. Зашифровать ее, поместив вначале все символы, расположенные
на четных позициях строки, а затем, в обратном порядке, все символы, расположенные на нечетных позициях (например, строка «Программа» превратится в «ргамамроП»).
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence to encrypt: ";
    getline(cin, sentence);

    string encrypted_sentence;

    // First, add all the characters at even positions
    for (int i = 0; i < sentence.length(); i += 2) {
        encrypted_sentence += sentence[i];
    }

    // Next, add all the characters at odd positions in reverse order
    for (int i = sentence.length() - 1; i >= 0; i -= 2) {
        if (i % 2 == 1) {
            encrypted_sentence += sentence[i];
        }
    }

    // Print the encrypted sentence
    cout << "Encrypted sentence: " << encrypted_sentence << endl;

    return 0;
}