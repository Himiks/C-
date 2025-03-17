#include<iostream>
#include<list>
using namespace std;
typedef list<int> mylist;
int main() {
    mylist aa;
    aa.push_back(1);
    aa.push_back(8);
    aa.push_back(4);
    aa.push_back(6);
    aa.push_back(5);
    for (auto a=aa.begin(); a!=aa.end(); ++a) {
        cout<<*a<<" ";
    }
    cout<<endl;
    cout<<aa.size()<<endl;
}
