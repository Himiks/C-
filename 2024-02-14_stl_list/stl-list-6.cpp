#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> aa={1,8,4,3,76,5};
    auto it1 = aa.begin(); ++it1; ++it1;
    auto it2 = aa.end(); --it2;
    it1 = aa.erase(it1,it2);
    for (auto i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
    --it1;
    it1 = aa.erase(it1);
    for (auto i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
}
