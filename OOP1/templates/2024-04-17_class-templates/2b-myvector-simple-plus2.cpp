#include<iostream>
using namespace std;
template <typename X>
class myvector {
    X *arr;
    int len;
public:
    myvector();
    void push_back(X n);
    X& at(int i);
    int size();
    ~myvector();
};
int main() {
    {
        myvector<int> aa;
        aa.push_back(1);
        aa.push_back(8);
        aa.push_back(4);
        aa.push_back(6);
        aa.push_back(5);
        for (int i=0;i<aa.size();++i)
            cout<<aa.at(i)<<" ";
        cout<<endl;
        cout<<aa.size()<<endl;
    }
    {
        myvector<string> aa;
        aa.push_back("one");
        aa.push_back("two");
        aa.push_back("three");
        for (int i=0;i<aa.size();++i)
            cout<<aa.at(i)<<" ";
        cout<<endl;
        cout<<aa.size()<<endl;
    }
}
template <typename X>
myvector<X>::myvector() {
    len=0;
}
template <typename X>
void myvector<X>::push_back(X n) {
    if (len==0) {
        arr=new X[1];
        arr[0] = n;
    }
    else {
        X *tmp=new X[len+1];
        for(int i=0;i<len;++i)
            tmp[i]=arr[i];
        tmp[len] = n;
        delete arr;
        arr=tmp;
    }
    ++len;
}
template <typename X>
X& myvector<X>::at(int i) {
    return arr[i];
}
template <typename X>
int myvector<X>::size() {return len;}
template <typename X>
myvector<X>::~myvector() {
    if(len>0) delete[] arr;
}
