//Write a program to print the binary representation of a number using loops Example: Input = 5, Output 101.

#include <stdio.h>
void printBinary(int n) {
    int i, started = 0;
    for (i = 31; i >= 0; i--) {
        if ((n & (1 << i)) != 0) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
    }
    if (!started) printf("0");
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Binary representation of %d: ", num);
    printBinary(num);
    printf("\n");
    return 0;
}