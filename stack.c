#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
typedef struct{ // agar typedef use nhi kr raha toh isFull(struct stack *stk){},
                // ... aise struct daalna pdega in function arguments for running the code
    int arr[MAX_SIZE];
    int top;
} stack;
// stk->top for index
// stk->arr[stk->top] for element
bool isFull(stack *stk){
    return stk->top==MAX_SIZE-1;
}
void push(stack *stk,int val){
    if(isFull(stk)){
        printf("Stack Overflow");
        return;
    }
    stk->top++;
    stk->arr[stk->top]=val;
}
bool isEmpty(stack *stk){
    return stk->top==-1;
}
void pop(stack *stk){
    if(isEmpty(stk)){
        printf("Stack Underflow");
        return;
    }
    stk->top--;
}
int top(stack *stk){
    if(isEmpty(stk)){
        printf("Stack Underflow");
        return -1;
    }
    return stk->arr[stk->top];
}
int size(stack *stk){
    if(isEmpty(stk)){
        return 0;
    }
    return stk->top+1;
}
void printStack(stack *stk){
    if(isEmpty(stk)){
        printf("Stack Underflow");
        return;
    }
    for(int i=stk->top;i>=0;i--){
        printf("%d\n",stk->arr[i]);
    }
    printf("\n");
}
int main(){
    stack stk;
    stk.top=-1;
    push(&stk,5);
    push(&stk,4);
    push(&stk,3);
    push(&stk,2);
    push(&stk,1);

    pop(&stk);
    pop(&stk);
    
    printStack(&stk);
    printf("%d ",top(&stk));
    printf("%d\n",size(&stk));
    pop(&stk);
    printStack(&stk);
    return 0;
}