#include<iostream>
using namespace std;
struct elem {
    int num;
    elem *prev;
    elem *next;
    elem(int n) {num=n;next=NULL;prev=NULL;};
};
void print(elem *first);
void rem(elem*&first);
elem* push_back(elem*&first,elem*&last,int n);
elem* push_front(elem*&first,elem*&last,int n);
elem* insert(elem*&first,elem *curr,int n);
elem* erase(elem*&first,elem*&last,elem *curr);
int main() {
    elem *first=NULL,*last;
    push_back(first,last,8);
    push_back(first,last,4);
    push_back(first,last,6);
    push_back(first,last,5);
    push_front(first,last,1);
    print(first);
    erase(first,last,first);
    elem *curr=first->next->next;
    curr = erase(first,last,curr);
    print(first);
    insert(first,curr,99);
    print(first);
    rem(first);
}
/*
1 8 4 6 5
8 4 5
8 4 99 5
*/
void print(elem *first) {
    elem *p = first;
    while (p!=NULL) {
        cout<<p->num<<" ";
        p = p->next;
    }
    cout<<endl;
}
void rem(elem*&first) {
    while (first) {
        elem *p = first->next;
        delete first;
        first = p;
    }
}
elem* push_back(elem*&first,elem*&last,int n) {
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
elem* push_front(elem*&first,elem*&last,int n) {
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
elem* insert(elem*&first,elem *curr,int n) {
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
elem* erase(elem*&first,elem*&last,elem *curr) {
    if (first==curr) first = first->next;
    if (last==curr) last = last->next;
    elem *before = curr->prev;
    elem *after = curr->next;
    if (before) before->next = after;
    if (after) after->prev = before;
    delete curr;
    return after;
}
