#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main() {
    vector<int> aa={12,8,5,14,7,3};
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    sort(aa.begin()+1,aa.end()-1);
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    sort(aa.begin(),aa.end());
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    list<int> bb={1,8,4,6,5};
    for(auto i:bb)cout<<i<<" ";cout<<endl;
    bb.sort();
    for(auto i:bb)cout<<i<<" ";cout<<endl;
}
