#include<iostream>
using namespace std;
class myvector {
    int *arr;
    int len;
public:
    myvector() {
        len=0;
    }
    void push_back(int n) {
        if (len==0) {
            arr=new int[1];
            arr[0] = n;
        }
        else {
            int *tmp=new int[len+1];
            for(int i=0;i<len;++i)
                tmp[i]=arr[i];
            tmp[len] = n;
            delete arr;
            arr=tmp;
        }
        ++len;
    }
    int& at(int i) {
        return arr[i];
    }
    int size() {return len;}
    ~myvector() {
        if(len>0) delete[] arr;
    }
};
int main() {
    myvector aa;
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
