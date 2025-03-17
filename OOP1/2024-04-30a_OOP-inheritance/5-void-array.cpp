#include<iostream>
using namespace std;
class person {
    string name;
    int birthyear;
public:
    person(const string &n,int b) {
        name=n; birthyear=b;
    }
    void print() {
        cout<<name<<" "<<birthyear<<endl;
    }
};
int main() {
    void **pp = new void*[3];

    pp[0] = new person("Peter",2000);
    pp[1] = new int;
    *((int*)pp[1]) = 777;
    pp[2] = new string("Hello");

    ((person*)pp[0])->print();
    delete (person*)pp[0];

    cout<<*((int*)pp[1])<<endl;
    delete (int*)pp[1];

    cout<<*((string*)pp[2])<<endl;
    delete (string*)pp[2];

    delete[] pp;
}
