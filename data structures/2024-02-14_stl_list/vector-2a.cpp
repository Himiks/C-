#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> aa={8,4,6};
    aa.push_back(5);
    aa.insert(aa.begin(),1);
    for (const auto &i: aa) {
        cout<<i<<" ";
    }
    cout<<endl;
}
