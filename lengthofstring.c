//Write a program to find the length of a given string using pointers. Ex: Input: "Hello" Output: 5

#include <stdio.h>
int main() {
    char str[100];
    char *ptr = str;
    printf("Enter string: ");
    gets(str);
    int length=0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the given string '%s': %d\n", str, length);
    return 0;
}