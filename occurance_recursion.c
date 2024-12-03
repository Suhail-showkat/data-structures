#include <stdio.h>

int first = -1, last = -1; // Global variables for first and last occurrences

void getIndices(char str[], char el, int idx) {
    if (str[idx] == '\0') // Base case: end of string
        return;

    if (str[idx] == el) {
        if (first == -1) // If first occurrence is not set, assign it
            first = idx;
        last = idx; // Always update last occurrence
    }

    getIndices(str, el, idx + 1); // Recursive call for next index
}

int main() {
    char str[] = "tabcdfghijakkk";
    char el = 'a';

    getIndices(str, el, 0);

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}
