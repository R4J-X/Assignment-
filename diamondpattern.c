// Write a program to print a diamond-shaped pattern using loops. Ex: Input: n = 5 Output:

#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++) {
            printf(" ");
        }
        for (int k=1;k<=2 * i-1;k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-1;i>=1;i--) {
        for (int j=1; j<=n-i;j++) {
            printf(" ");
        }
        for (int k=1;k<=2 * i-1;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}