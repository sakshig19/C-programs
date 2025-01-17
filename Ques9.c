// Write a program to input two numbers and find the greatest number using ternary operator

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the Numbers: ");
    scanf("%d %d",&a, &b);
    int greatest = (a>b)?a:b;
    printf("The greatest element among the two is: %d\n",greatest);
    return 0;
}