#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> aa={1,8,4,6,5};
    auto it=aa.begin();
    cout<<*it<<endl;
    for (const auto &i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
    for (auto it=aa.begin();it!=aa.end();++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
}
