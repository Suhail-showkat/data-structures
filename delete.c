#include<stdio.h>

int main(){
    int a[11];  
    int i, j, n;
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);
    if(n < 1 || n > 10) {
        printf("Invalid size! Please enter a size between 1 and 10.\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("The array is:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
    printf("Enter the position from which you want to delete the element (1 to %d): ", n);
    scanf("%d", &j);
    if(j < 1 || j > n){
        printf("Invalid position!\n");
        return 1;
    }
    
    // Delete the element and shift the remaining elements
    for(i = j - 1; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    n--;  // Reduce the size of the array after deletion
    
    // Display the array after deletion
    printf("Array after deletion is:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
    
    return 0;
}
