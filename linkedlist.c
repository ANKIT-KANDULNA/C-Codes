#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void printList(){
    struct node *p=head;
    printf("\n[");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("]");
}
void insert(int data){
    struct node *lk=(struct node *) malloc(sizeof(struct node));
    lk->data=data;
    lk->next=head;
    head=lk;
}
void insertafterkey(struct node *list,int data){
    struct node *lk=(struct node *) malloc(sizeof(struct node));
    lk->data=data;
    lk->next=list->next;
    list->next=lk;
}
void main(){
    int k=0,x,y;
    insert(12);
    insert(22);
    insertafterkey(head->next, 30);
    insertafterkey(head->next, 32);
    insert(50);
    printf("Linked List: ");
    printList();
}