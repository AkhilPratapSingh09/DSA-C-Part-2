#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;

}*first=NULL;

void create(int A[], int n){
    int i;
    struct Node *t,  *last;
    first= new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;

    }

    void Display(struct Node *p)
    {
        while(p!=NULL){
            printf("%d",p->data);
            p=p->next;
        }
    }


}
int main()
{
    int A[]={3,5,7,10,12};
    create(A,5);
    Display(first); 
    return 0;
}