#include<iostream>
#include<string>
using namespace std;
int main()
{    
    char c;
    cout << "Enter a symbol " << endl;
    do {
        cin >> c;
        if ('a' <= c && c <= 'z') {
            cout << char(int(c) - int('a') + int('A'));
        }
        else {
            cout << c;
        }
           
    } while (c != '.');
}




#include <iostream>
#include <string>
using namespace std;

int main() {
    char c;
    bool firstLetter = true; // Флаг для отслеживания первой буквы

    cout << "Enter a symbol " << endl;

    do {
        cin >> c;

        if (firstLetter && ('a' <= c && c <= 'z')) {
            cout << char(int(c) - int('a') + int('A'));
            firstLetter = false; // Устанавливаем флаг в false после изменения первой буквы
        }
        else {
            cout << c;
        }

    } while (c != '.');

    return 0;
}







