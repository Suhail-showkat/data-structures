#include <stdio.h>
void display(int arr[], int n){
    //travesrsal
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for(int i= size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[10]={1,3,5,7};
    int size = 4, element=44,index=0;  //by changing the index you can change the location where you want to insert the element.
    printf("Array before insertion is ");
    display(arr,4);
    indInsertion(arr, size, element, 10, index);
    size = size +1;
    printf("Array after insertion is ");
    display(arr,size);
    return 0;
}