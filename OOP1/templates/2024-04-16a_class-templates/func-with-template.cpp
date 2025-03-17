#include<iostream>
using namespace std;
template <class X>
X add (X a, X b) {
    return a+b;
}
int main() {
    cout<<add(5,7)<<endl;
    cout<<add(5.5,7.7)<<endl;
    string s="Hello", t=", World!";
    cout<<add(s,t)<<endl;
}
