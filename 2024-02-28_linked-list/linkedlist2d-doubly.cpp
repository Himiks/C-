#include<iostream>
using namespace std;
struct elem {
    int num;
    elem *prev;
    elem *next;
    elem(int n) {num=n;next=NULL;prev=NULL;};
};
void print(elem *first) {
    elem *p = first;
    while (p!=NULL) {
        cout<<p->num<<" "; /// *p
        p = p->next; /// ++p
    }
    cout<<endl;
}
int sum(elem *first) {
    int res = 0;
    elem *p = first;
    while (p!=NULL) {
        res += p->num;
        p = p->next; /// ++p
    }
    return res;
}
void rprint(elem *last) {
    elem *p = last;
    while (p!=NULL) {
        cout<<p->num<<" "; /// *p
        p = p->prev; /// --p
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
void push_back(elem*&first,elem*&last,int n) {
    elem *p=new elem(n); /// A
    if (first==NULL) {
       first=last=p; /// D,E
    }
    else {
        last->next=p; /// D
        p->prev=last; /// DD
        last = p; /// E
    }
}
void delete_me(elem *curr) {
    elem *before = curr->prev; /// 1
    elem *after = curr->next; /// 2
    before->next = after; /// A
    after->prev = before; /// B
    delete curr; /// C
}
int main() {
    int aa[] = {1,8,4,6,5};
    elem *first=NULL,*last;
    for (int i=0;i<5;++i) {
        push_back(first,last,aa[i]);
    }
    print(first);
    rprint(last);
    cout<<sum(first)<<endl; // 24


    print(first);
    elem *curr=first->next->next;
    cout<<curr->num<<endl;
    delete_me(curr);
    print(first);

    cout<<sum(first)<<endl; // 20

    rem(first);
}
