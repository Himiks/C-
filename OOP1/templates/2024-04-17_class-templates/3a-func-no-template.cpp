#include<iostream>
using namespace std;
int add (int a, int b) {
    return a+b;
}
double add (double a, double b) {
    return a+b;
}
string add (string a, string b) {
    return a+b;
}
int main() {
    cout<<add(5,7)<<endl;
    cout<<add(5.5,7.7)<<endl;
    string s="Hello", t=", World!";
    cout<<add(s,t)<<endl;
}
