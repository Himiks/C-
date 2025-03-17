#include<iostream>
#include<list>
using namespace std;
typedef list<int> mylist;
void print (const mylist &aa) {
    for (const auto &i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    mylist aa;
    aa.push_back(8);
    aa.push_back(4);
    aa.push_back(6);
    aa.push_back(5);
    aa.push_front(1);
    print(aa);
    auto it = aa.begin();
    it = aa.erase(it);
    ++it; // advance(it,1);
    ++it; // advance(it,1);
    it = aa.erase(it);
    print(aa);
    aa.insert(it,99);
    print(aa);
}
/*
1 8 4 6 5
8 4 5
8 4 99 5
*/
