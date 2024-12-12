#include<iostream>
using namespace std;
class person {
protected:
    string name;
    int birthyear;
public:
    person(const string &n,int b) {
        name=n; birthyear=b;
        cout<<"Constructor person"<<endl;
    }
    person() {
        cout<<"Constructor person()"<<endl;
    }
    void print() {
        cout<<name<<" "<<birthyear<<endl;
    }
    ~person() { cout<<"DEstructor person"<<endl; };
};
class student: public person {
protected:
    int studyyear;
public:
    student(const string &n,int b,int s): person(n,b){
        studyyear=s;
        cout<<"Constructor student"<<endl;
    }
    virtual void print() {
        person::print();
        cout<<studyyear<<endl;
    }
    virtual ~student() { cout<<"DEstructor student"<<endl; };
};
class teacher: virtual public person {
protected:
    string position;
public:
    teacher(const string &n,int b,const string &p): person(n,b) {
        position=p;
        cout<<"Constructor teacher"<<endl;
    }
    virtual void print() {
        person::print();
        cout<<position<<endl;
    }
    virtual ~teacher() { cout<<"DEstructor teacher"<<endl; };
};
class stperson: public student,public teacher {
public:
    stperson(const string &n,int b,int s,const string &p):
        student(n,b,s),
        teacher(n,b,p) {
        cout<<"Constructor STP"<<endl;
    }
    void print() {
        student::print();
        cout<<position<<endl;
    }
    ~stperson() { cout<<"DEstructor STP"<<endl; };
};
int main() {
    student *p = new stperson("Liz",1995,1,"professor");
    p->print();
    delete p;
}

