#include<iostream>
using namespace std;
template <class X, class Y, class Z>
struct mytriple {
    X first;
    Y second;
    Z third;
    mytriple (X f, Y s, Z t) {
        first = f;
        second = s;
        third = t;
    }
    void print(ostream &out) {
        out<<first<<" "<<second<<" "<<third<<endl;
    }
};
int main() {
    mytriple<string,int,string> p("John",20,"OK");
    p.print(cout);
}
