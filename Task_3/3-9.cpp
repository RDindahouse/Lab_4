/*
Дана строка. Подсчитать общее количество содержащихся в 
ней строчных латинских букв.
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    int count = 0;

    for (int i = 0; i < line.length(); i++) {
        if (line[i] >= 'a' && line[i] <= 'z') { // check if the character is a lowercase Latin letter
            count++;
        }
    }

    cout << "The total number of lowercase Latin letters is: " << count << endl;

    return 0;
}