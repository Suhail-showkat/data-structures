#include <stdio.h>

// Tail recursive function to calculate sum of array elements
int arrSum(int array[], int size, int sum) {
    if (size == 0)  // Base case: when size becomes zero, return sum
        return sum;

    return arrSum(array, size - 1, sum + array[size - 1]); // Recursive call
}

int main() {
    int array[] = {2, 55, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);

    printf("%d\n", arrSum(array, size, 0));

    return 0;
}
