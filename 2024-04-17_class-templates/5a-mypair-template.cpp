#include<iostream>
using namespace std;
template <class X, class Y, class Z>
struct mypair {
    X first;
    Y second;
    Z third;
    mypair (X f, Y s, Z t) {
        first = f;
        second = s;
        third = t;
    }
    void print(ostream &out) {
        out<<first<<" "<<second<<" "<<third<<endl;
    }
};
int main() {
    mypair<string,int,double> p("John",20,1.23);
    p.print(cout);
}
