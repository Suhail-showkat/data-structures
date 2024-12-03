#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int * arr; // pointer to allocate memory dynamically for the array holding stack
};
// Checking if Stack is empty
int isEmpty (struct stack * ptr){
    if (ptr->top == -1){
        return 1;// true => stack is empty
    }
    else{
        return 0;
    }
}
// Checking of stack is full
int isFull (struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1; // true => stack is full
    }
    else{
        return 0;
    }
}
int main(){
   /* struct stack s;
    s.size=10;
    s.top=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));*/
    struct stack *s = (struct stack *)malloc(sizeof(struct stack)); //allocate memory for the pointer "s"
    s->size = 10;
    s->top = -1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    if (isEmpty(s)){ // passing "s" to check if stack is empty
        printf("The stack is Empty!");
    }
    else{
        printf("The stack is not empty.");
    }
    return 0;
}