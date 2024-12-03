#include <stdio.h>
void display(int arr[], int n){
    //travesrsal
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indeletion(int arr[], int size, int index){
    for(int i= index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[10]={1,3,5,7};
    int size = 4, index=2;  //by changing the index you can change the location where you want to delete the element.
    printf("Array before deletion is ");
    display(arr,4);
    indeletion(arr, size, index);
    size = size -1;
    printf("Array after deletion is ");
    display(arr,size);
    return 0;
}