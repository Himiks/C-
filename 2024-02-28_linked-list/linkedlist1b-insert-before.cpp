#include<iostream>
using namespace std;
struct elem {
    int num;
    elem *next;
    elem(int n) {num=n;next=NULL;};
};
void print(elem *first) {
    elem *p = first;
    while (p!=NULL) {
        cout<<p->num<<" "; /// *p
        p = p->next; /// ++p
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
        last = p; /// E
    }
}
int main() {
    int aa[] = {1,8,4,6,5};
    elem *first=NULL,*last;
    for (int i=0;i<5;++i) {
        push_back(first,last,aa[i]);
    }


    int valuebefore=1;
    if (first) {
        if (first->num==valuebefore) {}
        else {
            pp=first->next;
        }
    }
    /// INSERT 7 after 8
    print(first);
    elem *before = first->next; /// X
    cout<<before->num<<endl;
    elem *after = before->next;
    cout<<after->num<<endl;
    elem *curr=new elem(7); /// A
    before->next=curr; /// B
    curr->next=after; /// C
    print(first);


    rem(first);
}
