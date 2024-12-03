#include<stdio.h>
int main(){
    int a[11]; 
    int i, j, k, n;
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
    printf("Enter the position at which you want to add an element (1 to %d): ", n + 1);
    scanf("%d", &j);
    if(j < 1 || j > n + 1){ // Checking if the position is valid
        printf("Invalid position!\n");
        return 1;
    }
    for(i = n; i >= j; i--){ // Shifting elements to the right to make space for the new element
        a[i] = a[i-1];
    }
    printf("Enter value to be inserted: ");
    scanf("%d", &k);
    a[j-1] = k;  // Inserting the new value
    n++;  // Increasing the size of the array after insertion
    printf("Array after insertion is:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}
