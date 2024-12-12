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
    virtual void print() {
        cout<<name<<" "<<birthyear<<endl;
    }
    virtual ~person() { cout<<"DEstructor person"<<endl; };
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
    person* pp[3];
    pp[0] = new person("Peter",1995);
    pp[1] = new student("Ann",2000,1);
    pp[2] = new teacher("John",1971,"professor");
    for (int i=0;i<3;++i) {
        pp[i]->print();
        delete pp[i];
    }
}
