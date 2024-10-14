#include <stdio.h>
int main(){
    float unit, amt;
    char name[50];
    printf("Enter the Name of the person: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter the Units used: ");
    scanf("%f", &unit);
    if(unit>199){
        amt = unit *1.20;
        printf("Welcome %s--You have your electricity bill--\n",name);
        printf("The amount payable is Rs %f",amt);
    }
    else if(unit>200 && unit<400){
        amt = unit *1.80;
        printf("The amount payable is Rs %f",amt);
    }
    else if(unit>400 && unit <600){
        amt = unit *2.00;
        printf("The amount payable is Rs %f",amt);
    }
    else if(unit>=600){
        amt = unit *2.20;
        printf("The amount payable is Rs %f", amt);
    }
    else {
        printf("Wrong units entered");
    }

}