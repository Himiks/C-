#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
struct lesslastdigit {
    bool operator()(int i,int k) {
        return i%10<k%10;
}};
struct biggerlastdigit {
    bool operator()(int i,int k) {
        return i%10>k%10;
}};
int main() {
    deque<int> aa={12,8,5,14,7,3};
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    sort(aa.begin(),aa.end());
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    sort(aa.begin(),aa.end(),lesslastdigit());
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    sort(aa.begin(),aa.end(),biggerlastdigit());
    for(auto i:aa)cout<<i<<" ";cout<<endl;
}
