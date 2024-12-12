#include<iostream>
using namespace std;
class myvector {
    struct iterator {
        myvector *vect;
        int pos;
        iterator(myvector *v,int p) { vect=v; pos = p;};
        int operator*() { return vect->aa[pos]; };
        bool operator!=(const iterator &it) { return pos!=it.pos; };
        iterator operator++() {
            if (pos<vect->len) ++pos;
            return *this; }
//        iterator operator++(int) {
//            iterator tmp=*this;
//            if (pos<vect->len) ++pos;
//            return tmp;
//        }
    };
    int *aa;
    int len;
public:
    myvector() { len=0; };
    int size() const { return len; };
    ~myvector() { if(len>0) delete aa; };
    void operator+=(int m);
    int& operator[](int i) {
        return aa[i];
    }
    iterator begin() { return iterator(this,0); };
    iterator end() { return iterator(this,len); };
    friend ostream& operator<<(ostream &out, const myvector &v);
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
//    for (auto it=v.begin();it!=v.end();++it) {
//        cout<<*it<<endl;
//    }
    cout<<v<<endl;
    for (auto a: v) {
        cout<<a<<endl;
    }
}
