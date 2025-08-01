#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
typedef struct{
    int arr[MAX_SIZE];
    int front;
    int rear; // tail/back
} queue;
bool isFull(queue *q){
    return q->rear==MAX_SIZE-1;
}
void push(queue *q,int val){ // enqueue
    if(isFull(q)){
        printf("Queue Overflow");
        return;
    }
    q->rear++;
    q->arr[q->rear]=val;
}
bool isEmpty(queue *q){
    return q->front>q->rear-1;
}
void pop(queue *q){ // dequeue
    if(isEmpty(q)){
        printf("Queue Underflow");
    }
    q->front++;
}
int front(queue *q){
    if(isEmpty(q)){
        printf("Queue Underflow");
        return -1;
    }
    return q->arr[q->front];
}
int size(queue *q){
    if(isEmpty(q)){
        printf("Queue Underflow");
        return 0;
    }
    return q->rear-q->front+1;
}
void printQueue(queue *q){
    if(isEmpty(q)){
        printf("Queue Underflow");
        return;
    }
    for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
    printf("\n");
}
int main(){
    queue q;
    q.front=0;
    q.rear=-1;
    push(&q,1);
    push(&q,2);
    push(&q,3);
    push(&q,4);
    push(&q,5);
    pop(&q);
    pop(&q);
    
    printQueue(&q);
    printf("%d ",front(&q));
    printf("%d\n",size(&q));
    pop(&q);
    printQueue(&q);
    return 0;
}