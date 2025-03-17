#include<iostream>
using namespace std;
int main() {
    {
        string s = "ello";
        cout<<s<<endl;
        string t = 'H'+s;
        cout<<t<<endl;
        t += '!';
        (t += '!') += '!';
        cout<<t<<endl;
    }
    {
        string s = "ello";
        operator<<(operator<<(cout,s),'\n');
        string t = operator+('H',s);
        operator<<(operator<<(cout,t),'\n');
        t.operator+=('!');
        t.operator+=('!').operator+=('!');
        operator<<(operator<<(cout,t),'\n');
    }
}
