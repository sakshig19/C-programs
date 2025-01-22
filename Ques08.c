//  WAP to swap two numbers using third variable, without using third variable, within single statement using comma operator.

#include <stdio.h>
int main(){
    int num1, num2,temp, choice;
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the second number: \n");
    scanf("%d",&num2);
    printf("Enter the type by which you want to swap the number:\n1. Using third variable.\n2. Without using third variable.\n3. Within single statement.\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        temp = num1;
        num1 = num2;
        num2 = temp;
        printf("After swapping the numbers with using third variable, num1 = %d, num2 = %d",num1, num2);
        break;

        case 2:
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
        printf("After swapping without using third variable num1 = %d and num2 = %d\n",num1, num2);
        break;

        case 3:
        printf("After swapping the numbers within a single statement using comma operator : num1 = %d, num2 = %d\n",num2, num1);
        break;

        default:
        printf("Invalid choice !!");
    }
    return 0;
}
