#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> aa={1,8,4,6,5};

    cout<<*++(++(aa.begin()))<<endl;
    cout<<*next(next(aa.begin()))<<endl;

    cout<<*--(--(aa.end()))<<endl;
    cout<<*prev(prev(aa.end()))<<endl;
}
