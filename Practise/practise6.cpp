#include<iostream>
using namespace std;
int main()
{
    int n; // input a number and check how many prime numbers beside it
    cout << "Enter a number " << endl;
    cin >> n;
    for (int j = 2; j <= n; j++) {
        int flag = 1;
        for (int i = 2; i < j; i++)
        if (j % i == 0) flag = 0;
        if (flag) //flag != 0
            cout << j << endl;
    }

}
