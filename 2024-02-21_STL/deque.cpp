#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> aa={8,4,6};
    for(int i=0;i<aa.size();++i)
        cout<<aa[i]<<' ';
    cout<<endl;
    aa.push_front(1); // allowed
    aa.push_back(5);
    for(int i=0;i<aa.size();++i)
        cout<<aa[i]<<' ';
    cout<<endl;
}
