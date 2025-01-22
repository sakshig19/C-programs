//  Enter the arithmetic operator from user, perform operation on two numbers according to the operator using ternary operator.

#include <stdio.h>
int main() {
    int num1, num2;
    char operator;

    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);
    printf("Enter the operator (+, -, *, /): \n");
    scanf(" %c", &operator); 

    int result = (operator == '+') ? (num1 + num2) :
                 (operator == '-') ? (num1 - num2) :
                 (operator == '*') ? (num1 * num2) :
                 (operator == '/' && num2 != 0) ? (num1 / num2) : -1;

    if (operator == '/' && num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (result == -1) {
        printf("Error: Invalid operator.\n");
    } else {
        printf("Result: %d\n", result);
    }

    return 0;
}
