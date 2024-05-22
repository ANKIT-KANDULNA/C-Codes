#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    node* next;
} node;
node* push(int x){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->value=x;
    newnode->next=NULL;
    return newnode;
}
int main(){
    node* a=push(8);
    node* b=push(16);
    node* c=push(20);
    node* d=push(28);
    node* e=push(64);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    for(node* i=a;i!= NULL;i=(i->next))
    {
        printf("%d ",i->value);
    }
    return 0;
}