#include "mypair.h"
mypair::mypair (string f, int s) {
    first = f;
    second = s;
}
void mypair::print(ostream &out) {
    out<<first<<" "<<second<<endl;
}
