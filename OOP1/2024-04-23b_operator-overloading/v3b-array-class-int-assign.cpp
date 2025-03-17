#include<iostream>
using namespace std;
class myvector {
    int *aa;
    int len;
public:
    myvector() { len=0; };
    myvector(myvector &v) {
        len = v.len;
        if (len>0) {
            aa = new int[len];
            for (int i=0;i<len;++i) aa[i]=v[i];
        }
    }
    void operator=(myvector &v) {
        if (len>0) delete aa;
        len = v.len;
        if (len>0) {
            aa = new int[len];
            for (int i=0;i<len;++i) aa[i]=v[i];
        }
    }
    int size() { return len; };
    ~myvector() { if(len>0) delete aa; };
    void operator+=(int m);
    int& operator[](int i) {
        return aa[i];
    }
};
void myvector::operator+=(int m) {
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
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    myvector v;
    v+=1;
    v+=8;
    v+=4;
    v+=6;
    v+=5;
    myvector vv(v);
    vv[0] = 11;
    print(v);
    print(vv);
    myvector vvv;
    vvv = vv;
    vvv[4] = 55;
    print(vv);
    print(vvv);
}
