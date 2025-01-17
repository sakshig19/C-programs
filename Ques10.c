//  Write a program to find even/odd number using ternary operator

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);
    char result = (n%2==0)?printf("%d is an EVEN number\n",n):printf("%d is an ODD number\n",n);
    return 0;
    
}