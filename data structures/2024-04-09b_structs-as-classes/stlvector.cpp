#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> myvector;
void print (const myvector &aa) {
    for (const auto &i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    myvector aa;
    aa.push_back(1);
    aa.push_back(8);
    aa.push_back(4);
    aa.push_back(6);
    aa.push_back(5);
    print(aa);
    auto it = aa.begin();
    it = aa.erase(it);
    aa.erase(it+2);
    print(aa);
    aa.insert(it+2,99);
    print(aa);
    cout<<aa.at(2)<<endl; // aa[2]
    aa.at(2) = 100; // aa[2] = 100;
    print(aa);
}
/*
1 8 4 6 5
8 4 5
8 4 99 5
99
8 4 100 5
*/
