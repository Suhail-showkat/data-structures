//Case 1: deletion at the beginning
//Case 2: deletion in between(at some index)
//Case 3: deletion at the end
//Case 4: deletion after a given node (deletion at first node with that value)

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
//case 1:
struct Node * deleteFirst (struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//case 2:
struct Node * deleteInBetween (struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 1; i < index - 1; i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//case 3:
struct Node * deleteLast(struct Node * head){
    struct Node * p=head;
    struct Node * q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
// case 4:
struct Node * deleteElement (struct Node * head, int value){
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}
void linkedListTraversal (struct Node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth; 
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=55;
    third->next=fourth;
    fourth->data=76;
    fourth->next=NULL;
    printf("\nLinked List before deletion\n");
    linkedListTraversal(head);
    //head = deleteFirst(head);
   //head = deleteInBetween(head, 3);
   //head = deleteLast (head);
   head = deleteElement (head,11);
    printf("\nLinked List after deletion\n");
    linkedListTraversal (head);
    return 0;
}