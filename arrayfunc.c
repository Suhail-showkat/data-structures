#include<stdio.h>
void read(int a[], int n);
void display(int a[], int n);
int search(int a[], int n);
int main(){
    int a[10], n, find;
    printf ("Enter the size of the function (<10):  ");
    scanf("%d", &n);
    read(a, n);
    display(a, n);
    find = search (a, n );
    if(find== -1){
        printf("Element not found");
    } 
    else {
        printf("Element found at location %d", find);
    }
    return 0;
}
void read(int a[],int n){
    int i;
    printf("Enter the elements of the array");
    for(i=0; i<n; i++){
        printf("Value of %d element: ", i+1);
        scanf("%d", &a[i]);
    }
}
void display(int a[],int n){
    int i;
    printf("The elements of an array are: ");
    for(i=0; i<n; i++){
        printf(" %d", a[i]);
    }
    printf("\n");
}
int search (int a[], int n){
    int x, i;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);
    for(i=0; i<n; i++){
        if(a[i]==x){
            return i+1;

        }
    }
    return -1;
}