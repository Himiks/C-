#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1, num2;
    int fnd = 0, ctr = 0;
    cout << "Enter starting range " << endl;
    cin >> num1;
    cout << "Enter ending range " << endl;
    cin >> num2;
    for (int i = num1; i < num2; i++) {
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                ctr++;
        }
        if (ctr == 0 && i != 1) {
            fnd++;
                cout << i << " ";
        }
        ctr = 0;
    }
    cout << "\n\n The total number of prime numbers between " << num1 << " to " << num2 << " is: " << fnd << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int i = 1, u = 1, sum = 0;
    while (i <= 500) {
        while (u <= 500) {
            if (u < i) {
                if (i % u == 0)
                    sum = sum + u;
            }
                u++;
            
        }
            if (sum == i) {
                cout << i << " " << "\n";
            }
            i++;
            u = 1;
            sum = 0;
          
        
    }

}


#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "Enter a number " << endl;
    cin >> num1;
    for (int n = num1 - 1; n >= 1; n--) {
        for (int m = 2; m < n; m++) {
            if (n % m == 0)
                ctr++;
        }
        if (ctr == 0) {
            if (n == 1) {
                cout << "no prime number less than 2 " << endl;
                break;
            }
            cout << n << " is the last prime number before " << num1 << endl;
            break;
        }
        ctr = 0;
    }
    return 0;
} //3333333333333333333333

#include <iostream>
using namespace std;
int main()
{
    int x[] = { 5,6,7,8,9,10,20,30 };
    for (int i = 0; i < 8; i++) {
        x[i] = i * i;
    }
        for (int i = 0; i < 8; i++) {
            cout << x[i] << endl;
        
    }

}


//Enter from kybort 1 real number and print home many digits do you have before comme and after;#include <iostream>


// Enter from ky string with dot. print out this string except if you have double letters transform it to upper case
#include<iostream>
using namespace std;
int main() {
    char c, p;// c-entered, p - previous;
    int f = 1;
    cin >> p;
    if (p != '.') {
        cin >> c;
        while (c != '.') {
            if (c == 'a' && p == 'a') {
                cout << 'A'; f = 0;
            }

            else
            {
                cout << p; f = 1;
            }
            p = c; cin >> c;

        }
        if (f) cout << p;

    }//3333333333333333333



 #include<iostream>
using namespace std;
int main() {
    char c; int f1 = 0;
    cin >> c;
    while (c != '.') {
        if (!f1 && c == 'a')f1 = 1;
        else if (f1 && c == 'a') {
            cout << 'A'; f1 = 0;
        }
        else if (f1) {

            cout << 'a';
            f1 = 0; cout << c;
        }
        else cout << c;
        cin >> c;
    }
    if (f1) cout << 'a';
}
}





















    // Enter two integers and print the figure 


#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            if (abs(a - i) <= 1 && abs(b - j) <= 1)
                cout << '0';
            else cout << '.';
        cout << endl;
    }
}//333333333333



#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Type number: ";
    cin >> x;
    int sum = 0;
    for (int i = 2; i <= x; i++) {
        cout << i << endl;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0 && i == sum) {
                cout << sum << endl;
            }
            else if (i % j == 0) {
                sum += j;
            }
        }
        sum = 0;
    }
    return 0;
}///333333333
