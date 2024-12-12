#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
bool isOdd(int i) {
    return i%2!=0;
}
int main() {
    deque<int> aa={12,8,5,14,7,3};
    cout<<"Original sequence:"<<endl;
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    partition(aa.begin(),aa.end(),isOdd);
    cout<<"Partitioned sequence (odds first):"<<endl;
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    deque<int> bb={12,8,5,14,7,3};
    stable_partition(bb.begin(),bb.end(),
              [](int i){return i%2!=0;});
    cout<<"STABLE partitioned sequence:"<<endl;
    for(auto i:bb)cout<<i<<" ";cout<<endl;
}
