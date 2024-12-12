#include<iostream>
using namespace std;
template <class X=int, class Y=int>
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
    mypair<> p(5,7);
    p.print(cout);
    mypair<string> pp("five",7);
    pp.print(cout);
}
