#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> aa={1,8,4,6,5};
    for (int i=0; i<aa.size(); ++i) {
        cout<<aa[i]<<" ";
    }
    cout<<endl;
    for (const auto &i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
    for (auto it=aa.begin();it!=aa.end();++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
}
