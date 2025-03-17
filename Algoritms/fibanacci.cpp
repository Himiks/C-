#include <iostream>
using namespace std;

int main()
{
    int f0 = 0, f1 = 1, n;
    cin >> n;

    if (n < 2)
        cout << f1 << endl;
    else {
        int fn;
        for (int i = 0; i < n - 1; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        cout << fn;
    }

    return 0;
}