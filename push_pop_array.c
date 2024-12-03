#include <stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int top;
    int * arr;
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
void push (struct stack *ptr,int value){
    if(isFull(ptr)){
        printf("Stack overflow! Cannot push %d to the stack.\n", value);
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop (struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow! Cannot pop from the stack.\n");
        return -1;
    }
    else {
        int value = ptr->arr[ptr->top]; //storing the first value of the stack
        ptr->top--;
        return value;
    }
}
int main(){
    struct stack *sp= (struct stack *) malloc(sizeof(struct stack)); //stores address of structure and space
    sp->size = 10;
    sp->top = -1;
    sp -> arr = (int *) malloc (sp->size * sizeof(int));
    printf("Stack has been created successfully.\n");
    printf("Before pushing, Full: %d\n", isFull(sp)); 
    printf("Before pushing, Empty: %d\n", isEmpty(sp));
    push(sp, 56);
    push(sp, 43);
    push(sp, 89);
    push(sp, 90);
    push(sp, 77);
    push(sp, 50);
    push(sp, 96);
    push(sp, 36);
    push(sp, 45);
    push(sp, 33);
    //push(sp, 46);
    printf("After pushing, Full: %d\n", isFull(sp)); 
    printf("After pushing, Empty: %d\n", isEmpty(sp));
    //pop
    printf("Popped %d from the stack \n", pop(sp));
    printf("Popped %d from the stack \n", pop(sp));
    printf("Popped %d from the stack \n", pop(sp));
    printf("Popped %d from the stack \n", pop(sp));
    
}