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
    ~person() { cout<<"DEstructor person"<<endl; };
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
    ~student() { cout<<"DEstructor student"<<endl; };
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
    ~teacher() { cout<<"DEstructor teacher"<<endl; };
};
int main() {
    person *p = new person("Peter",1995);
    p->print();
    delete p;
    person *s = new student("Ann",2000,1);
    s->print();
    delete s;
    person *t = new teacher("John",1971,"professor");
    t->print();
    delete t;
}
