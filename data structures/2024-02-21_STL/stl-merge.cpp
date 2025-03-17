#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> aa={1,5,8};
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    vector<int> bb={2,3,7,9};
    for(auto i:bb)cout<<i<<" ";cout<<endl;
    vector<int> cc(7);
    merge(aa.begin(),aa.end(),
          bb.begin(),bb.end(),
          cc.begin());
    for(auto i:cc)cout<<i<<" ";cout<<endl;
}
