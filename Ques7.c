// WAP to calculate compound interest
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float p, r, t, amt;
    printf("Enter the Principle amount: \n");
    scanf("%f",&p);
    printf("Enter the Rate if interest: \n");
    scanf("%f",&r);
    printf("Enter the Time duration: \n");
    scanf("%f",&t);
    printf("Enter the number of times interest is compounded per year: \n");
    scanf("%d",&n);
    amt = p*pow(1 + ((r/100) / n), n * t);
    printf("The Compound Interest is: %.2f",amt-p);
    return 0;
}
