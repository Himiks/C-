#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main() {
    vector<int> aa={1,8,4,6,5};
    auto it = aa.begin();
    //advance(it,3);
    it+=3;
    vector<int> bb={3,7};
    aa.insert(it,bb.begin(),bb.begin()+1);
//    aa.insert(it,bb.begin(),bb.end());
    for (const auto &i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
}
