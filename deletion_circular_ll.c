#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal (struct Node *head){
    struct Node *ptr=head;
    do{
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }while (ptr != head);
}
struct Node * deleteAtStart (struct Node * head){
    struct Node * ptr =(struct Node*)malloc(sizeof(struct Node));
    struct Node * p= head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=head->next;
    free(head);
    head= p->next;
    return head;
} 
struct Node * deleteAtEnd (struct Node * head){
    struct Node * ptr =(struct Node*)malloc(sizeof(struct Node));
    struct Node * p= head->next;
    while (p->next!=head){
        ptr=p;
        p=p->next;
    }
    ptr->next=head;
    free(p);
    return head;
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
    fourth->next=head;
    printf("\nLinked List before deletion\n");
    linkedListTraversal(head);
    //head = deleteAtStart (head);
    head= deleteAtEnd (head);
    printf("\nLinked List after deletion\n");
    linkedListTraversal (head);
    return 0;
}