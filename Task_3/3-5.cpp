/*
Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). 
Вывести строку, содержащую эти же слова, разделенные одним пробелом и расположенные в 
обратном порядке
 */
#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    string sentence;
    cout << "Enter string: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    stack<string> words;

    while (ss >> word) {
        words.push(word);
    }
    cout << "Result: ";
    while (!words.empty()) {
        cout << words.top() << " ";
        words.pop();
    }
    cout << endl;

    return 0;
}