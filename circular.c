#include<stdio.h>
#include<stdlib.h>
struct node{
   int value;
   struct node*next;
};
void create(struct node**head,int *size){
    struct node*temp=(*head);
    int k;
    printf("Enter the number upto where want to insert nodes : ");
    scanf("%d",&k);
    int i=0;
    while(i<k){
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->next=0;
    printf("Enter the value want at %d node : ",i+1);
    scanf("%d",&new->value);
    if((*head)==0){
        (*head)=new;
        temp=(*head);
        new->next=(*head);
    }
    else{
        temp->next=new;
        temp=new;
        new->next=(*head);
    }
    i++;
   }
   (*size)=k;
}
void insert(struct node**head,int *size){
    struct node*new;
    struct node*temp2=(*head);
    struct node*temp=(*head)->next;
    new=*head;
    int k;
    printf("Enter the position where want to insert element : ");
    scanf("%d",&k);
    if(k==1){
        struct node*like;
        like=malloc(sizeof(struct node));
        like->next=0;
        printf("Enter the value want to insert at %d position : ",k);
        scanf("%d",&like->value);
        new->next=(*head);
        (*head)=new;
        while(temp->next!=temp2){
            temp=temp->next;
        }
        temp->next=(*head);
        (*size)++;
        return;
    }
    else if(k>1 && k<((*size)+2)){
        int m=k;
        while(k-2){
            new=new->next;
            k--;
        }
        struct node*near;
        near=malloc(sizeof(struct node));
        near->next=0;
        printf("Enter the value want to insert at %d position : ",m);
        scanf("%d",&near->value);
        near->next=new->next;
        new->next=near;
        while(temp->next!=temp2){
            temp=temp->next;
        }
        temp->next=(*head);
        (*size)++;
        return ;
    }
    else{
        printf("Invalid position of the linked list");
    }
    return;
}
void delete_node(struct node**head,int *size){
    struct node*temp=(*head);
    struct node*temp2=(*head);
   int k;
   printf("Enter the position from where want to delete element : ");
   scanf("%d",&k);
   if(k==1){
      (*head)=(*head)->next;
      while(temp->next!=temp2){
            temp=temp->next;
        }
        temp->next=(*head);
      (*size)--;
      return;
   }
   else if(k>1 && k<(*size)+1){
     struct node*new;
     new=(*head);
     while(k-2){
        new=new->next;
        k--;
     }
     new->next=new->next->next;
     (*size)--;
     return;
   }
   else{
    printf("Can't delete , undefined position");
   }
   return;
}
void reverse(struct node**head){
    struct node*mine=(*head)->next;
    while(mine->next!=(*head)){
       mine=mine->next;
    }
    struct node*prev=mine;
    struct node*current=(*head);
    struct node*new=(*head);
    while(new->next!=(*head)){
        new=new->next;
        current->next=prev;
        prev=current;
        current=new;
    }
    new=new->next;
    current->next=prev;
    prev=current;
    current=new;
    (*head)=prev;
    return;
}
void prin(struct node*head){
    struct node*new=head;
   while(head->next!=new){
    printf("%d ",head->value);
    head=head->next;
   }
   printf("%d",head->value);
   printf("\n");
   return;
}
int main(){
    struct node*head=0;
    int size=0;
    create(&head,&size);
    prin(head);
    insert(&head,&size);
    prin(head);
    delete_node(&head,&size);
    prin(head);
    struct node*rever;
    rever=head;
    reverse(&rever);
    prin(rever);
    return 0;
}