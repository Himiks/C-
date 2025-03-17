#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> bb={1,8,3,7,9};
    list<int>::iterator it1=bb.begin();
    cout<<*(++(++it1))<<endl; // 3
    ++(*it1);
    cout<<*it1<<endl; // 4
    list<int>::const_iterator it2=bb.begin();
    cout<<*(++(++it2))<<endl; // 4
    // ++(*it2);
}
