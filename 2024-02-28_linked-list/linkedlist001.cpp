#include<iostream>
using namespace std;
struct elem {
    int num;
    elem *next;
    elem(int v) {num=v;next=NULL;}
    ~elem() {cout<<"Deleted:"<<num<<endl;};
};
int main() {
    int aa[] = {1,8,4,6,5};
    elem *first=NULL,*last;
    elem *p;
    for (int i=0;i<5;++i) {
        p = new elem(aa[i]);
        if (first==NULL) first = last = p;
        else {
            last->next = p; // A
            last = p; // B
        }
    }
    p = first;
    while (p) {
        cout<<p->num<<" ";
        p = p->next;
    }
    cout<<endl;
    while (first) {
        p = first->next;
        delete first;
        first = p;
    }
}
