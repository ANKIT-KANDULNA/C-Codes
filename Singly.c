#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node*next;
};
void insert(struct node**head,int *size){
    struct node*new;
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
        (*size)++;
        return ;
    }
    else{
        printf("Invalid position of the linked list");
    }
    return;
}
void delete_node(struct node**head,int *size){
   int k;
   printf("Enter the position from where want to delete element : ");
   scanf("%d",&k);
   if(k==1){
      (*head)=(*head)->next;
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
    struct node*prev=0;
    struct node*current=(*head);
    struct node*new=(*head);
    while(new!=0){
        new=new->next;
        current->next=prev;
        prev=current;
        current=new;
    }
    (*head)=prev;
    return;
}
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
    }
    else{
        temp->next=new;
        temp=new;
    }
    i++;
   }
   (*size)=k;
}
void prin(struct node*head){
   while(head!=0){
    printf("%d ",head->value);
    head=head->next;
   }
   printf("\n");
   return;
}
int main(){
   struct node*head=0;
   struct node*temp=0;
   int size=0;
   create(&head,&size);
   //Printing the linked list.....
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