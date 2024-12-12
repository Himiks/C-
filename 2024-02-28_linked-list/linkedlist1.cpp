#include<iostream>
using namespace std;
struct elem {
    int num;
    elem *next;
};
int main() {
    int aa[] = {1,8,4,6,5};
    elem *first=NULL,*last;

    for (int i=0;i<5;++i) {
        elem *p=new elem; /// A
        p->num=aa[i]; /// B
        p->next=NULL; /// C
        if (first==NULL) {
           first=last=p; /// D,E
        }
        else {
            last->next=p; /// D
            last = p; /// E
        }
    }
    cout<<first->num<<endl;
    cout<<first->next->num<<endl;
    cout<<first->next->next->num<<endl;
    /// PRINT
    elem *p = first;
    while (p!=NULL) {
        cout<<p->num<<" "; /// *p
        p = p->next; /// ++p
    }
    cout<<endl;
    /// DELETE
    while (first) {
        p = first->next;
        delete first;
        first = p;
    }
//    p = first;
//    while (p!=NULL) {
//        first = p->next;
//        delete p;
//        p = first;
//    }
//    cout<<first->num<<endl;
//    cout<<first->next->num<<endl;
//    cout<<first->next->next->num<<endl;
}
