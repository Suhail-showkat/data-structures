#include <stdio.h>

// Function to find length of string
int strLength(const char *str) {
    int len = 0;
    while (str[len] != '\0') 
        len++;
    return len;
}

// Function to copy one string to another
void strCopy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the copied string
}

// Function to concatenate two strings
void strConcat(char *dest, const char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') 
        i++; // Move to end of dest string

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Null-terminate
}

// Function to compare two strings
int strCompare(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i]; // Return ASCII difference
        i++;
    }
    return str1[i] - str2[i]; // Compare remaining part (if any)
}

// Function to reverse a string
void strReverse(char *str) {
    int i = 0, j = strLength(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str1[100], str2[100];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // String Length
    printf("Length of first string: %d\n", strLength(str1));

    // String Copy
    char copied[100];
    strCopy(copied, str1);
    printf("Copied string: %s\n", copied);

    // String Concatenation
    strConcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // String Comparison
    int cmp = strCompare(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    // String Reverse
    strReverse(copied);
    printf("Reversed copied string: %s\n", copied);

    return 0;
}
