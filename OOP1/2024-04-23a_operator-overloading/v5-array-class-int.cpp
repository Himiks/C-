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
    int size() const { return len; };
    ~myvector() { if(len>0) delete aa; };
    void operator+=(int m);
    void operator+=(const myvector &v);
    int& operator[](int i) {
        return aa[i];
    }
    int at(int i) const {
        return aa[i];
    }
    friend ostream& operator<<(ostream &out, const myvector &v);
    friend void operator+=(int m,myvector &v);
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
void myvector::operator+=(const myvector &v) {
    for (int i=0;i<v.size();++i) {
        this->operator+=(v.at(i));
    }
}
void operator+=(int m,myvector &v) {
    if (v.len==0) {
        v.aa = new int[1];
    }
    else {
        int *tmp = v.aa;
        v.aa = new int[v.len+1];
        for (int i=0;i<v.len;++i) {
            v.aa[i+1] = tmp[i];
        }
        delete tmp;
    }
    v.aa[0] = m;
    ++v.len;
}
void print(myvector &v) {
    for(int i=0;i<v.size();++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
ostream& operator<<(ostream &out, const myvector &v) {
    for(int i=0;i<v.size();++i) {
        out<<v.aa[i]<<" ";
    }
    return out;
}
int main() {
    myvector v;
    v+=1;
    v+=8;
    v+=4;
    v+=6;
    v+=5;
    cout<<v<<endl;
    99+=v;
    cout<<v<<endl;
    myvector vv;
    vv+=11;
    vv+=88;
    v+=vv;
    cout<<v<<endl;
}
