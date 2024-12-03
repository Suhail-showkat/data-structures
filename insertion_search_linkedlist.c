//Case 1: insertion at the beginning
//Case 2: insertion in between(at some index)
//Case 3: insertion at the end
//Case 4: insertion after a given node

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node * insertAtStart(struct Node* head, int data){                   // case 1
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));  
    ptr-> data = data;
    ptr-> next = head;
    return ptr;
}
struct Node * insertInBetween (struct Node* head, int data, int index){     //case 2
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p=head;
    int i = 0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node * insertAtEnd (struct Node* head, int data){                     //case 3
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct Node * insertAtNode (struct Node* head, struct Node* prevNode, int data){ //case 4
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
void linkedListTraversal (struct Node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }
}
int search (int s, struct Node* head){
    int index = 0; 
    struct Node * p = head;
    while (p != NULL){
        if (p-> data == s){
            printf("Element found at index %d", index);
            break;
        }
        p=p->next;
        index ++;
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
    //linking head to second node
    head->data=7;
    head->next=second;
    //linking second to third node
    second->data=11;
    second->next=third;
    //linking third to last/ fourth node
    third->data=55;
    third->next=fourth;
    //linking last node to NULL
    fourth->data=76;
    fourth->next=NULL;
    printf("\nLinked List before insertion\n");
    linkedListTraversal(head);
    //head= insertAtStart(head, 45);
    //head= insertInBetween(head, 45,2);
    //head= insertAtEnd(head, 45);
    head= insertAtNode(head, second,45);
     printf("\nLinked List after insertion\n");
    linkedListTraversal (head);
    search (55, head);
    return 0;
}