#include<stdio.h>
int main(){
int a, b;
printf("Welcome to the Simple Calculator Application\n");
printf("Enter First number - ");
scanf("%d", &a);
printf("Enter Second number - ");
scanf("%d", &b);
char op;
printf("Enter the operation you want to perform(+,-,*,/,%) - ");
getchar();
scanf("%c",&op);
switch(op){
case '+': printf("The sum is %d", a+b);
break;
case '-': printf("The difference is %d", a-b);
break;
case '*': printf("The product is %d", a*b);
break;
case '/': printf("The quotient is %d", a/b);
break;
case '%': printf("The remainder is is %d", a%b);
break;
default: printf("INVALID OPERATOR");
break;
}
return 0;
}