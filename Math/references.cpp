#include<iostream>
using namespace std;


 void func(int &a) {
     a *= 3;
}

int main()
{
    int a = 5;
    func(a);

    cout << a;
    
}

