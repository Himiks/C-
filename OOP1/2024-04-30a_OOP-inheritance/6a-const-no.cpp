#include<iostream>
#include<vector>
using namespace std;
class myvector {
    vector<int> aa;
public:
    int size() { return aa.size(); };
    void push_back(int m);
    int& operator[](int i) {
        return aa[i];
    }
};
void myvector::push_back(int m) {
    aa.push_back(m);
}
void print(myvector &v) {
    for(int i=0;i<v.size();++i) {
        cout<<v[i]<<" ";
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
