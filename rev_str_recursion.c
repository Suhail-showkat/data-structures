#include <stdio.h>

void reverse(const char *str) 
{
    if (*str == '\0') 
        return;
    reverse(str + 1);
    putchar(*str);
}

int main() 
{
    char str[] = "Geeks for Geeks";
    reverse(str);
    return 0;
}
