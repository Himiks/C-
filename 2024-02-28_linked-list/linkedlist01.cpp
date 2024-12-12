#include<iostream>
using namespace std;
struct elem {
    int num;
    elem *next;
};
int main() {
    int aa[] = {1,8,4,6,5};
    elem *first=NULL,*last;
    elem *p = new elem;
    p->num = 1;
    p->next = NULL;
    first = last = p;
    cout<<first->num<<endl;
    p = new elem;
    p->num = 8;
    p->next = NULL;
    last->next = p; // A
    last = p; // B
    cout<<last->num<<endl;
    p = first;
    while (p) {
        cout<<p->num<<" ";
        p = p->next;
    }
}
