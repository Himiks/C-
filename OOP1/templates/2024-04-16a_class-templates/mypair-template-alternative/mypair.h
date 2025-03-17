#include<iostream>
using namespace std;
template <class X, class Y>
struct mypair {
    X first;
    Y second;
    mypair (X f, Y s);
    void print(ostream &out);
};
typedef mypair<string,int> mypair1;
typedef mypair<string,string> mypair2;
