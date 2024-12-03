#include <stdio.h>
#include <stdbool.h>

bool checkIfIncreasing(int arr[], int idx, int n) {
    if (idx == n - 1) // Base case: reached the last element
        return true;

    if (!checkIfIncreasing(arr, idx + 1, n)) // Recursive call
        return false;

    return arr[idx] < arr[idx + 1]; // Check if the current element is less than the next
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 6, 3, 4, 5};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (checkIfIncreasing(arr2, 0, n))
        printf("Strictly Increasing\n");
    else
        printf("NOT Strictly Increasing\n");

    return 0;
}
