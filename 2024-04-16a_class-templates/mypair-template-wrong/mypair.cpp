#include "mypair.h"
template <class X, class Y>
mypair<X,Y>::mypair (X f, Y s) {
    first = f;
    second = s;
}
template <class X, class Y>
void mypair<X,Y>::print(ostream &out) {
    out<<first<<" "<<second<<endl;
}