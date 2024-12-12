#include<iostream>
using namespace std;
template <class X, class Y>
struct mypair {
    X first;
    Y second;
    mypair (X f, Y s);
    void print(ostream &out);
};
template <class X, class Y>
mypair<X,Y>::mypair (X f, Y s) {
    first = f;
    second = s;
}
template <class X, class Y>
void mypair<X,Y>::print(ostream &out) {
    out<<first<<" "<<second<<endl;
}
