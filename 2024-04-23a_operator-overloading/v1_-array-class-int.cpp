#include<iostream>
using namespace std;
class myvector {
    int *aa;
    int len;
public:
    myvector() { len=0; };
    int size() { return len; };
    ~myvector() { if(len>0) delete aa; };
    void push_back(int m);
    int& at(int i) {
        return aa[i];
    }
};
void myvector::push_back(int m) {
    if (len==0) {
        aa = new int[1];
    }
    else {
        int *tmp = aa;
        aa = new int[len+1];
        for (int i=0;i<len;++i) {
            aa[i] = tmp[i];
        }
        delete tmp;
    }
    aa[len] = m;
    ++len;
}
void print(myvector &v) {
    for(int i=0;i<v.size();++i) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main() {
    myvector v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(5);
    print(v);
}
