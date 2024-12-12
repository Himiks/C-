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
    print(first);

    elem *before=first; /// A1
    while (before->next!=last) {  /// before->next->next!=NULL
        before=before->next; /// A
    }
    cout<<before->num<<endl;
    delete last; /// B; delete before->next;
    before->next = NULL; /// C
    last = before; /// D

    print(first);
    rem(first);
}
