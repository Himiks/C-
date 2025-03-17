/*#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, m = 0;
    cout << "\n\n Print patern........:\n";
    cout << "-----------------------------------\n";
    cout << " Input number or rows: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            for (j = 1; j <= i; j++) {
                cout << m << "  ";
            }
            for (k = 1; k <= n - i; k++) {
                cout << k << "  ";
            }
        }
        else {
            for (k = i - 1; k >= 1; k--) {
                cout << k << "  ";
            }
            cout << m << "  ";
            for (j = 1; j <= n - i; j++) {
                cout << j << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}*/






/*#include <iostream>

int customFunction(int& num1, int& num2, int& num3, int& num4) {
    int result;

    if (num3 > num2) {
        result = 1;
    }
    else {
        result = 0;
    }

    if (result) {
        int temp = num1; // 4
        num1 = num3; //7
        num3 = temp; //4
    }
    else {
        if (num1 % 2 == 0) {
            num4 = num2;
        }
        else {
            num4 = num3;
        }
    }

    return result;
}

int main() {
    int num1 = 4, num2 = 2, num3 = 7;
    int result = customFunction(num1, num2, num3,  num2);

    std::cout << "Result: " << result << std::endl;
    std::cout << "Parameters at the end: " << num1 << ", " << num2 << ", " << num3 << ", " << num2 << std::endl;

    num1 = 5, num2 = 9, num3 = 4;
    result = customFunction(num1, num2, num3,  num3);

    std::cout << "Result: " << result << std::endl;
    std::cout << "Parameters at the end: " << num3 << ", " << num2 << ", " << num1 << ", " << num3 << std::endl;

    return 0;
}*/


/*#include <iostream>

int main() {
    int N;
    std::cout << "Ievadiet naturālu skaitli N: ";
    std::cin >> N;

    int firstThreeDigits = N;
    int divisor = 1;

    while (firstThreeDigits >= 1000) {
        firstThreeDigits /= 10;
    }

    int sum = 0;
    int count = 0;

    int temp = firstThreeDigits;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
        count++;
    }

    if (count == 0) {
        std::cout << "Nepietiekami cipari, lai veiktu aprēķinus." << std::endl;
    }
    else {
        double average = static_cast<double>(sum) / count;
        std::cout << "Pirmo trīs ciparu vidējā aritmētiskā vērtība: " << average << std::endl;
    }

    return 0;
}*/




/*#include <iostream>
using namespace std;
int calk(int a) {
    int lastnum = a % 10;
    int num = a / 1000;
    int res= num * 10 + lastnum;
    if (num == 0) return lastnum;
    else return res;
}

int main() {
    int a;
    cin >> a;
    cout << calk(a);


}*/




/*#include <iostream>
using namespace std;
int main() {
    int n;
    int last;
    int last2;
    int b;
    int res;
    cin >> n;
    last = n % 10;
    last2 = n / 10 % 10;
    b = n / 100;
    res = b * 100 + last * 10 + last2;
    cout << res << endl;
    



    


}*/


/*#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int index = 1;
    int temp;
        for (int i = 0; i < 5;) {
            temp = index * index;
            index++;

            if (temp > n) {
                cout << temp << " ";
                i++;
            }
        }
    





}*/
// second option 


/*#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int cnt = 0;
int i = 1;
while (cnt < 5) {
    if (i * i > n) {
        cout << i * i << " ";
        cnt++;
    }
    i++;

}


}*/


/*#include <iostream>

int main() {
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    int NN;

    if (N < 10) {
        NN = N;
    }
    else if (N < 100) {
        NN = N / 10;
    }
    else {
        int nn = N;
        int mult = 1;

        while (nn > 999) {
            nn /= 10;
            mult *= 10;
        }

        NN = nn / 100 * mult + N % mult;
    }

    std::cout << NN << std::endl;

    return 0;
}*/





/*#include <iostream>
using namespace std;
bool fun(int a, int b, int &c, double &d) {
    bool ret = false;
    if (a == b && c == b)
        ret= true;
    d = (a + b + c) / 3.0;
    c = a + b;
    return ret;
}







int main() {
    int average = 0;
    int a, b, c;
    double d;
    cin >> a >> b >> c;
    bool ret = fun(a, b, c, d);
    cout << a << " " << b << " " << c << " " << d << " " << ret << endl;


    




}*/




/*#include <iostream>
using namespace std;

int main() {
    double real;
    int prec;

    cout << "Enter a number and the number of decimal places to round to: " << endl;
    cin >> real >> prec;

    for (int i = 0; i < prec; i++)
        real *= 10;

    real = int(real + 0.5);

    for (int i = 0; i < prec; i++)
        real /= 10;  // Исправление: добавлен оператор деления

    cout << real << endl;

    return 0;
}*/










/*#include <iostream>
using namespace std;

int function(int &a, int &b, int &c, int &d) {
    bool ret = false;
    if (b > c) {
        ret = true;
    }
    if (c / 2) {
        d = a;
    }
    else {
        d = b;
    }
    int term = b;
    b = a;
    a = term;
    return ret;
}



int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    bool ret = function( a, b, c, d);
    cout << a << " " << b << " " << c << " " << d << " " << ret << endl;


}*/

/*#include <iostream>
using namespace std;
int main()
{
    for (auto N : { 12345, 123, 56, 9 }) {
        int ret = N / 1000 * 10 + N / 10 % 10;
        cout << ret << endl;
        // 124 2 5 0
    }
}*/


/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ret = n / 1000 * 10 + n / 10 % 10;
    cout << ret << endl;




}*/





/*#include <iostream>
using namespace std;
int main()
{
    int n;
    double nn = 0;
    int average = 0;
    cin >> n;
    if (n < 99) {
        while (n != 0) {
            nn += n%10;
            n /= 10;
            average++;
        }
    }
    else {
        while (n > 99) {
            n /=10;

        }
        while (n != 0) {
            nn += n % 10;
            n /= 10;
            average++;
        }
    }
    cout<< "The average between two first numbers is: " << nn / average << endl;
}*/





