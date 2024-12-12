#include<iostream>
using namespace std;
class person {
    string name;
    int birthyear;
public:
    person(const string &n,int b) {
        name=n; birthyear=b;
        cout<<"Constructor person"<<endl;
    }
    void print() {
        cout<<name<<" "<<birthyear<<endl;
    }
};
class student: public person {
    int studyyear;
public:
    student(const string &n,int b,int s): person(n,b){
        studyyear=s;
        cout<<"Constructor student"<<endl;
    }
    void print() {
        person::print();
        cout<<studyyear<<endl;
    }
};
class teacher: public person {
    string position;
public:
    teacher(const string &n,int b,const string &p): person(n,b) {
        position=p;
        cout<<"Constructor teacher"<<endl;
    }
    void print() {
        person::print();
        cout<<position<<endl;
    }
};
int main() {
    person p("Peter",1995);
    p.print();
    student s("Ann",2000,1);
    s.print();
    teacher t("John",1971,"professor");
    t.print();
}
