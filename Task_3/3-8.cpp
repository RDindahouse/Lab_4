/*
Дана строка-предложение с избыточными пробелами между словами. Преобразовать ее так, 
чтобы между словами был ровно один пробел
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence with extra spaces: ";
    getline(cin, sentence);

    string result;
    bool prevSpace = true; // flag to track if the previous character was a space

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            // if the previous character was not a space, add a space to the result string
            if (!prevSpace) {
                result += ' ';
                prevSpace = true;
            }
        }
        else {
            result += sentence[i];
            prevSpace = false;
        }
    }

    // remove any leading or trailing spaces in the result string
    while (result.length() > 0 && result[0] == ' ') {
        result.erase(0, 1);
    }
    while (result.length() > 0 && result[result.length()-1] == ' ') {
        result.erase(result.length()-1, 1);
    }

    cout << "Result: " << result << endl;

    return 0;
}