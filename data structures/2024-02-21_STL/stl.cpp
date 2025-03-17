#include<iostream>
#include<algorithm>
#include<deque> // almost vector
using namespace std;
bool isOdd(int i) {
    return i%2!=0;
}
bool myless(int i,int k) {
    return i%10<k%10;
}
bool mylessrev(int i,int k) {
    return i%10>k%10;
}
int main() {
    deque<int> aa={12,8,5,14,7,3};
    for(auto i:aa)cout<<i<<" ";cout<<endl;

    auto it = find(aa.begin(),aa.end(),14);
    if (it==aa.end()) cout<<"not found"<<endl;
    else cout<<*it<<endl;
    //sort(aa.begin()+1,aa.end()-1);
    //stable_partition(aa.begin(),aa.end(),isOdd);
    partition(aa.begin(),aa.end(),
              [](int i){return i%2!=0;});
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    sort(aa.begin(),aa.end(),myless);
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    sort(aa.begin(),aa.end(),mylessrev);
    for(auto i:aa)cout<<i<<" ";cout<<endl;
}
