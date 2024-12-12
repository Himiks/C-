#include<iostream>
using namespace std;
class student {
    string name;
    int birthyear;
    int studyyear;
public:
    student(const string &n,int b,int s) {
        name=n; birthyear=b; studyyear=s;
    }
    void print() {
        cout<<name<<" "<<birthyear<<" "<<studyyear<<endl;
    }
};
class teacher {
    string name;
    int birthyear;
    string position;
public:
    teacher(const string &n,int b,const string &p) {
        name=n;birthyear=b;position=p;
    }
    void print() {
        cout<<name<<" "<<birthyear<<" "<<position<<endl;
    }
};
int main() {
    student s("Ann",2000,1);
    s.print();
    teacher t("John",1971,"professor");
    t.print();
}
