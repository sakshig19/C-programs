// Swapping the values of number without using a variable
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}

