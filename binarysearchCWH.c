#include <stdio.h>
int binarySearch(int arr[], int size, int element){
    int mid, high, low;
    low=0;
    high=size-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==element){
         return mid;
        }
        if (arr[mid]<element){
         low=mid+1;
        }
        else{
         high=mid-1;
        }
    }
    return -1;
}
int main (){
    int arr[]={1, 8,9,14,17};
    int size=sizeof(arr)/sizeof(int);
    int searchIndex = binarySearch(arr, size, 14);
    printf("The element 14 was found at position %d\n", searchIndex+1 );
}