// WAP to calculate the simple interest
#include <stdio.h>
#include <conio.h>
int main(){
    float p, r, t, si;
    printf("Enter the Principle amount: \n");
    scanf("%f",&p);
    printf("Enter the Rate if interest: \n");
    scanf("%f",&r);
    printf("Enter the Time duration: \n");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("The Simple Interest is: %f",si);
    return 0;
}
