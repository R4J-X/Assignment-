//Write a function to calculate the GCD (Greatest Common Divisor) of two numbers using recursion.Ex: Input: a=56, b=98 Output: GCDis 14.
#include<stdio.h>
int gcd(int a,int b);
void main() {
    int a,b,c;
    printf("\nEnter the two numbers (a = and b =):\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c = gcd(a,b);
    printf("\nGCD of a and b is: %d",c);
}
int gcd(int a,int b) {
    if (b!=0) {
        return gcd(b,a % b);
    } else {
        return a;
    }
}