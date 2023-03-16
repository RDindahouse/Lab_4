/*
Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). 
Найти длину самого длинного слова
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;

    cout << "Enter a string of Russian words: ";
    getline(cin, line);

    int max_length = 0;
    int current_length = 0;

    // проходимся по каждому символу строки
    for (int i = 0; i < line.length(); i++) {
        // если встречаем пробел, то считаем текущую длину слова
        if (line[i] == ' ') {
            // если текущая длина слова больше максимальной, то обновляем максимальную длину
            if (current_length > max_length) {
                max_length = current_length;
            }
            current_length = 0;
        }
        else {
            // если символ не пробел, то увеличиваем текущую длину слова
            current_length++;
        }
    }

    // проверяем длину последнего слова, т.к. в строке может не быть пробела после него
    if (current_length > max_length) {
        max_length = current_length;
    }

    // выводим результат
    cout << "Length of the longest word: " << max_length << endl;

    return 0;
}