/*
Дана строка, состоящая из русских слов, набранных заглавными буквами и 
разделенных пробелами (одним или несколькими). Вывести строку, содержащую эти же слова, разделенные 
одним пробелом и расположенные в алфавитном порядке.
 */
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    wcout << L"Enter string: ";
    wstring sentence;
    getline(wcin, sentence);

    transform(sentence.begin(), sentence.end(), sentence.begin(), ::towlower);

    wstringstream ss(sentence);
    wstring word;
    vector<wstring> words;

    while (ss >> word) {
        words.push_back(word);
    }

    // Sort the vector of words in alphabetical order
    sort(words.begin(), words.end());

    // Output the sorted words separated by one space
    wcout << L"Result: ";
    for (auto it = words.begin(); it != words.end(); ++it) {
        wcout << *it << L" ";
    }
    wcout << endl;

    return 0;
}