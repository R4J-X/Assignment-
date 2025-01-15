#include <stdio.h> 
int main(void) {
    int choice,input1,input2; 
    printf("Calculator Application\n\n");
    do { 
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Choice: "); 
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Num1:");
                scanf("%d",&input1);
                printf("Num2: ");
                scanf("%d",&input2);
                printf("%d+%d=%d\n\n",input1,input2,input1+input2);
                break;
            case 2:
                printf("Num1:");
                scanf("%d",&input1);
                printf("Num2:");
                scanf("%d",&input2);
                printf("%d-%d=%d\n\n",input1,input2,input1-input2);
                break;
            case 3:
                printf("Num1: ");
                scanf("%d",&input1);
                printf("Num2: ");
                scanf("%d", &input2);
                printf("%d * %d=%d\n\n",input1,input2,input1 * input2);
                break;
            case 4:
                printf("Num1: ");
                scanf("%d", &input1);
                printf("Num2: ");
                scanf("%d", &input2);
                if (input2 != 0) {
                    printf("%d / %d = %.2f\n\n",input1,input2, (float)input1 / input2);
                } else {
                    printf("Error: Division by zero is not allowed.\n\n");
                }
                break;
            case 5:
                printf("\nBye Bye, See You Soon!\n");
                break;
            default:
                printf("\nInvalid Input!\n");
        }
    } while (choice !=5);
    return 0;
}