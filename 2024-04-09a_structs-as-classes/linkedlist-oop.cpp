#include<iostream>
using namespace std;
struct elem {
    int num;
    elem *prev;
    elem *next;
    elem(int n) {num=n;next=NULL;prev=NULL;};
};
class mylist {
    elem *first,*last;
public:
    mylist();
    elem* push_back(int n);
    elem* push_front(int n);
    elem* erase(elem *curr);
    void print() const;
    ~mylist();
    elem* begin() const;
    elem* next(elem*&p) const;
    elem* insert(elem *curr,int n);
};
mylist::mylist() {
    first = NULL;
}
elem* mylist::push_back(int n) {
    elem *p=new elem(n);
    if (first==NULL) {
       first=last=p;
    }
    else {
        last->next=p;
        p->prev=last;
        last = p;
    }
    return p;
}
elem* mylist::push_front(int n) {
    elem *p=new elem(n);
    if (first==NULL) {
       first=last=p;
    }
    else {
        first->prev=p;
        p->next=first;
        first = p;
    }
    return p;
}
elem* mylist::erase(elem *curr) {
    if (first==curr) first = first->next;
    if (last==curr) last = last->next;
    elem *before = curr->prev;
    elem *after = curr->next;
    if (before) before->next = after;
    if (after) after->prev = before;
    delete curr;
    return after;
}
void mylist::print() const {
    elem *p = first;
    while (p!=NULL) {
        cout<<p->num<<" ";
        p = p->next;
    }
    cout<<endl;
}
mylist::~mylist() {
    while (first) {
        elem *p = first->next;
        delete first;
        first = p;
    }
}
elem* mylist::begin() const {
    return first;
}
elem* mylist::next(elem*&p) const {
    p = p->next;
    return p;
}
elem* mylist::insert(elem *curr,int n) {
    elem *p=new elem(n);
    if (first==curr) {
        first->prev=p;
        p->next=first;
        first = p;
    }
    else {
        elem *before = curr->prev;
        before->next = p;
        p->prev = before;
        p->next = curr;
        curr->prev = p;
    }
    return p;
}
int main() {
    mylist aa;
    aa.push_back(8);
    aa.push_back(4);
    aa.push_back(6);
    aa.push_back(5);
    aa.push_front(1);
    aa.print();
    elem* p = aa.begin();
    p = aa.erase(p);
    aa.next(p); /// ++p;
    aa.next(p);
    p = aa.erase(p);
    aa.print(); /// cout<<aa<<endl;
    aa.insert(p,99);
    aa.print();
}
/*
1 8 4 6 5
8 4 5
8 4 99 5
*/
