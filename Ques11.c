// WAP to input three numbers and find the greatest number using the ternary operator.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a, &b, &c);
    int greatest = (a>b)?(a>c?a:c):(b>c?b:c);
    printf("Greatest among them is %d",greatest);
    return 0;
}