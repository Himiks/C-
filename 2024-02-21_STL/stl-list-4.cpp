#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> aa={1,8,4,6,5};
    for (auto it=aa.begin();it!=aa.end();++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it=aa.rbegin();it!=aa.rend();++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
}
