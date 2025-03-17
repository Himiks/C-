#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> myvector;
int main() {
    myvector aa;
    aa.push_back(1);
    aa.push_back(8);
    aa.push_back(4);
    aa.push_back(6);
    aa.push_back(5);
    for (int i=0;i<aa.size();++i) {
        cout<<aa.at(i)<<" "; // aa[i]
    }
    cout<<endl;
    cout<<aa.size()<<endl;
}
