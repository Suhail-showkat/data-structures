#include <stdio.h>
int linearSearch(int arr[], int size, int element){
    for(int i=0; i<size ;i++){
       if (arr[i]==element){
        return i;
       } 
    }
    return -1;
}
int main (){
    int arr[]={1, 8,9, 67, 56};
    int size=sizeof(arr)/sizeof(int);
    int searchIndex = linearSearch(arr, size, 67);
    printf("The element 67 was found at position %d\n", searchIndex+1 );
}