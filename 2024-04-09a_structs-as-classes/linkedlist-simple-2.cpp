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
    void print(elem *first);
    mylist() {first=NULL;};
    ~mylist(elem*&first);
    elem* push_back(int n);
    elem* push_front(int n);
    elem* insert(elem *curr,int n);
    elem* erase(elem *curr);
};
int main() {
    mylist aa;
    aa.push_back(8);
    aa.push_back(4);
    aa.push_back(6);
    aa.push_back(5);
    aa.push_front(1);
    aa.print();
    aa.erase(first);
    //elem *curr=first->next->next;
    curr = aa.erase(curr);
    aa.print();
    aa.insert(99);
    aa.print();
    delete aa;
}
/*
1 8 4 6 5
8 4 5
8 4 99 5
*/
void mylist::print(elem *first) {
    elem *p = first;
    while (p!=NULL) {
        cout<<p->num<<" ";
        p = p->next;
    }
    cout<<endl;
}
mylist::~mylist(elem*&first) {
    while (first) {
        elem *p = first->next;
        delete first;
        first = p;
    }
}
elem* mylist::push_back(elem*&first,elem*&last,int n) {
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
elem* mylist::push_front(elem*&first,elem*&last,int n) {
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
elem* mylist::insert(elem*&first,elem *curr,int n) {
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
elem* mylist::erase(elem*&first,elem*&last,elem *curr) {
    if (first==curr) first = first->next;
    if (last==curr) last = last->next;
    elem *before = curr->prev;
    elem *after = curr->next;
    if (before) before->next = after;
    if (after) after->prev = before;
    delete curr;
    return after;
}
