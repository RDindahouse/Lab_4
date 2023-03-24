/*
Дана строка, содержащая полное имя файла, то есть имя диска, список каталогов (путь), 
собственно имя и расширение (например, d:\ivanov\primer\unit1.pas). 
Выделить из этой строки имя файла (без расширения).
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cout << "Enter a string S: ";
    getline(cin, S);

    // Найдем позицию последнего символа "\" в строке
    size_t lastSlash = S.find_last_of('\\');

    // Найдем позицию последней точки в строке, начиная от lastSlash
    size_t lastDot = S.find_last_of('.', lastSlash);

    // Выделим имя файла, начиная от lastSlash+1 и до lastDot-1
    string fileName = S.substr(lastSlash+1, lastDot-lastSlash-1);

    cout << fileName;

    return 0;
}