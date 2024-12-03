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
struct Node * insertAtStart (struct Node * head, int data){
    struct Node * ptr =(struct Node*)malloc(sizeof(struct Node)); 
    ptr->data=data;
    struct Node * p= head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
struct Node * insertAtEnd (struct Node * head, int data){
    struct Node * ptr =(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    while (p->next != head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}
struct Node * insertAtNode (struct Node* head, struct Node* prevNode, int data){ 
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
int search (int element, struct Node * head){
    struct Node * temp;
    int index = 1;
    if (head == NULL)
    return -2;
    temp = head -> next;
    do{
        if (temp->data==element)
            return index;
            temp=temp->next;
            index ++;
    } while (temp!=head->next);
    return -1;
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
    printf("\nLinked List before insertion\n");
    linkedListTraversal(head);
    //head= insertAtStart(head, 45);
    //head=insertAtEnd(head, 44);
    head=insertAtNode(head, third, 87);
    printf("\nLinked List after insertion\n");
    linkedListTraversal (head);
    int index = search (76, head);
    if (index==-1){
        printf("ELement not found.");
    }
    else if (index == -2){
        printf("Linked list is empty.");
    }
    else{
        printf("Element found at %d index", index);
    }
    return 0;
}