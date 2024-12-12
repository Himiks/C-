#include<iostream>
#include<vector>
using namespace std;
typedef vector<string> myvector;
int main() {
    myvector aa;
    aa.push_back("alpha");
    aa.push_back("beta");
    aa.push_back("gamma");
    for (int i=0;i<aa.size();++i) {
        cout<<aa.at(i)<<" "; // aa[i]
    }
    cout<<endl;
    cout<<aa.size()<<endl;
}
