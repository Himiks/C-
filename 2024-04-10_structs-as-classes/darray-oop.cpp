#include<iostream>
using namespace std;
class myvector {
    int *arr;
    int len;
public:
    myvector();
    ~myvector();
    void push_back(int val);
    void print() const;
    void erase(int k);
    void insert(int k,int val);
    int &at(int k);
};
int main() {
    myvector aa;
    aa.push_back(1);
    aa.push_back(8);
    aa.push_back(4);
    aa.push_back(6);
    aa.push_back(5);
    aa.print();
    aa.erase(0);
    aa.erase(2);
    aa.print();
    aa.insert(2,99);
    aa.print();
    cout<<aa.at(2)<<endl; /// aa[2]
    aa.at(2)=100;
    aa.print(); /// cout<<aa<<endl;
}
/*
1 8 4 6 5
8 4 5
8 4 99 5
99
8 4 100 5
*/
myvector::myvector() {
    len=0;
}
myvector::~myvector() {
    if (len>0) delete[] arr;
}
void myvector::push_back(int val) {
    if (len==0) {
        arr=new int[1];
        arr[0] = val;
    }
    else {
        int *tmp=new int[len+1];
        for(int i=0;i<len;++i)
            tmp[i]=arr[i];
        tmp[len] = val;
        delete arr;
        arr=tmp;
    }
    ++len;
}
void myvector::print() const {
    for (int i=0;i<len;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void myvector::erase(int k) {
    if (len==1) {
        delete[] arr;
    }
    else {
        int *tmp=new int[len-1];
        for(int i=0;i<k;++i)
            tmp[i]=arr[i];
        for(int i=k+1;i<len;++i)
            tmp[i-1]=arr[i];
        delete arr;
        arr=tmp;
    }
    --len;
}
void myvector::insert(int k,int val) {
    if (len==0) {
        arr=new int[1];
        arr[0] = val;
    }
    else {
        int *tmp=new int[len+1];
        for(int i=0;i<k;++i)
            tmp[i]=arr[i];
        tmp[k] = val;
        for(int i=k+1;i<len;++i)
            tmp[i]=arr[i-1];
        delete arr;
        arr=tmp;
    }
    ++len;
}
int& myvector::at(int k) {
    return arr[k];
}
