/*#include<iostream>
using namespace std;
int main() {
    int first = 0;
    int second = 0;
    int third = 0; 
    const int K = 3;
    const int R = 3;
    int arr[R][K] = { {1,22,11}, {3,7,6}, {8,40,5} };

    for (int i = 0; i < R; i++) {
        first += arr[i][0];
    }
    for (int i = 0; i < R; i++) {
        second += arr[i][1];
    }
    for (int i = 0; i < R; i++) {
        third += arr[i][2];
    }

    if (first > second || first > third) {

        cout << "Answer is: " << 0 << "The sum of the column 1 is the biggest " << endl;
    }

    else if (second > first || second > third) {
        cout << "Answer is: " << 1 << endl;
    }

    else
        cout << "Answer is: " << 2 << endl;






}*/




/*#include<iostream>
using namespace std;
int main() {
    int aaa[3][3] = { {1,22,4},{3,7,1},{8,40,5} };
    int bigsum = 0;
    int bigcol = 0;
    for (int c = 0; c < 3; c++) {
        int sum = 0;
        for (int r = 0; r < 3; r++) {
            sum += aaa[r][c];
        }
        if (c == 0 or sum >= bigsum) {
            bigsum = sum;
            bigcol = c;
        }
    }
    cout << bigsum << " " << bigcol << endl;
}*/



/*#include <iostream>
#include <string>
#include <cctype>  // Для isdigit

int main() {
    // Ввод строки от пользователя
    std::cout << "Введите строку (смешанную с цифрами и буквами): ";
    std::string input;
    std::cin >> input;

    // Нахождение цифр в строке
    std::string numbers;

    for (char ch : input) {
        if (isdigit(ch)) {
            numbers += ch; // Добавление цифры к строке
        }
    }

    // Печать извлеченных цифр
    std::cout << "Цифры: " << numbers << std::endl;

    // Нахождение среднего арифметического
    double average = (numbers.length() > 0) ? std::stod(numbers) / numbers.length() : 0.0;

    // Печать среднего арифметического
    std::cout << "Среднее арифметическое цифр: " << average << std::endl;

    return 0;
}








/*#include <iostream>
#include <string>
using namespace std;
int main() {
    int index=0;
    string s;
    cin>> s;





    for (char ch : s) {
        for(int i = 0; i < 1; i++)
        if (isdigit(ch)) {
            index++;
        }
        if (isalpha(ch)) {
            index = 0;
        }
            if (index>=3) {
                cout << s << " YEP " << endl;
                return 0;
            }
     
    }
    cout << "No " << endl;
    return 0;


}*/








/*#include <iostream>
#include <string>
using namespace std;
 void foo( string& s) {
    int index = 0;
    for (int i = 0; i < s.length(); i++) {
        if (index < 2) {
            if (s[i] >= '0' && s[i] <= '9') {
                index++;
                continue;
            }
        }
        cout << s[i] << endl;
    }


}




int main() {
    string str = "13a45bc6";
    foo(str);


}*/





/*#include<iostream>
using namespace std;
void trimleading(string& s) {
    string t;
    bool found = false;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (c >= '0' and c <= '9') {
            if (found) 
            t += c;
        }
        else {
            t += c;
            found = true;
        }
    }
    s = t;
}
int main() {
    string s = "13a45bc6";
    cout << s << endl;
    trimleading(s);
    cout << s << endl;
}*/








/*#include<iostream>
using namespace std;
void trimleading(char s[]) {
    int found = 0;
    while (s[found] >= '0' and s[found] <= '9')
        found++;
    if (s[found] == 0) 

        s[0] = 0;
    else {
        int i = 0;
        while (s[found] != 0) {
            s[i] = s[found];
            i++;
            found++;
        }
        s[i] = 0;
    }
}
int main() {
    char s[] = "03045bc6";
    cout << s << endl;
    trimleading(s);
    cout << s << endl;
}*/



/*#include<iostream>
#include<cmath>
using namespace std;
class codecalculator {
    int size;
    int state;
    unsigned step;
public:
    codecalculator(int _size, int _state, unsigned _step) {
        size = _size; state = _state; step = _step;
    }
    int current_code() { return state; };
    void tick() {
        state = (state + step) % size;
    }
    void back() {
        //        state-=step;
        state = (state - step) % size;

        //      while(state<0)state+=size;
    }
};
int main() {
    codecalculator c(5, 3, 2); // 5=size of �circle� (0,1,2,3,4), 3=start-code, 2=step, it will count: 3,0,2,4,1,3...
    cout << c.current_code() << endl; // prints: 3
    c.tick(); // adds �step� (in a circular manner, so current_code becomes 0)
    c.tick(); // adds �step� (in a circular manner, so current_code becomes 2)
    cout << c.current_code() << endl; // prints: 2
    c.tick(); // adds �step� (in a circular manner, so current_code becomes 4)
    cout << c.current_code() << endl; // prints: 4
    c.back(); // removes �step�(in a circular manner, so current_code becomes 2)
    c.back(); // removes �step�(in a circular manner, so current_code becomes 2)
    c.back(); // removes �step�(in a circular manner, so current_code becomes 2)
    cout << c.current_code() << endl; // prints: 3
}*/







/*#include<iostream>
using namespace std;
class codecalculator {
    int size;
    int curr;
    int step;
public:
    codecalculator(int size, int curr, int step) {
        this->size = size;
        this->curr = curr;
        this->step = step;
    }
    int current_code() { return curr; };
    void tick() {
        curr = (curr + step) % size;
    }
    void back();
};
void codecalculator::back() {
    curr = (curr - step + size) % size;
}
int main() {
    codecalculator c(5, 3, 2); // 5=size of �circle� (0,1,2,3,4),
    // 3=start-code, 2=step, it will count: 3,0,2,4,1,3...
    cout << c.current_code() << endl; // prints: 3
    c.tick(); // adds �step� (in a circular manner, so current_code becomes 0)
    c.tick(); // adds �step� (in a circular manner, so current_code becomes 2)
    cout << c.current_code() << endl; // prints: 2
    c.tick(); // adds �step� (in a circular manner, so current_code becomes 4)
    cout << c.current_code() << endl; // prints: 4
    c.back(); // removes �step�(in a circular manner, so current_code becomes 2)
    cout << c.current_code() << endl; // prints: 2

}*/





/*#include<iostream>
#include<vector>
using namespace std;
class student {
    string name;
    int sem;
    string courses[3];
    static int count;
public:
    static int get_count() { return count; }
    void print() {
        cout << name << " " << sem;
        for (int i = 0; i < 3; ++i)
            cout << " " << courses[i];
        cout << endl;
    }
    student(string n, int s,
        string c0, string c1, string c2) :
        name(n), sem(s) {
        courses[0] = c0;
        courses[1] = c1;
        courses[2] = c2;
        count++;
    }
    ~student() { count--; };
};
int student::count = 0;
int main() {
    {
        cout << student::get_count() << endl;
        student s("John", 1, "Prg", "Web", "Maths");
        cout << s.get_count() << endl;
        s.print();
        student t("Ann", 2, "DB", "Web2", "Algebra");
        cout << student::get_count() << endl;
        t.print();
    }
    cout << student::get_count() << endl;
}*/