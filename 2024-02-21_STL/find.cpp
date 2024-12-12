#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
int main() {
    deque<int> aa={12,8,5,14,7,3};
    for(auto i:aa)cout<<i<<" ";cout<<endl;
    int n = 14;
    auto it = find(aa.begin(),aa.end(),n);
    if (it==aa.end())
        cout<<"not found: "<<n<<endl;
    else cout<<"found: "<<*it<<endl;
    n= 15;
    it = find(aa.begin(),aa.end(),15);
    if (it==aa.end())
        cout<<"not found: "<<n<<endl;
    else cout<<"found: "<<*it<<endl;
}
