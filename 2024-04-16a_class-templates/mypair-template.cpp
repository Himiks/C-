#include<iostream>
using namespace std;
template <class X, class Y>
struct mypair {
    X first;
    Y second;
    mypair (X f, Y s) {
        first = f;
        second = s;
    }
    void print(ostream &out) {
        out<<first<<" "<<second<<endl;
    }
};
int main() {
    mypair<string,int> p("John",20);
    p.print(cout);
}
