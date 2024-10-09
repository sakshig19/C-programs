//
// #include <stdio.h>
// int main(){
//     float c, f;
//     printf("Enter the value of celcius to convert into: ");
//     scanf("%f", &c);
//     f= 9/5 * c +32;
//     printf("%f is the representation in ferenhite", f);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     float c, f;
//     printf("Enter the value of ferenhite to convert into: ");
//     scanf("%f", &f);
//     c= f -32 * 5/9;
//     printf("%f is the representation in celcius", c);
//     return 0;
// }


#include <stdio.h>
int main(){
    float c, f;
    int choice;
    printf("Select the type of conversion where 1 is for celcius and 2 is for ferenhite:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: //Celcius to ferenhite
        printf("Enter the temperature in celcius: \n");
        scanf("%f", &c);
        f= 9/5 * c +32;
        printf("%f is the representation in ferenhite", f);
        break;

    case 2:  //Ferenhite to celcius
        printf("Enter the temperature in ferenhite: \n");
        scanf("%f", &f);
        c = f - 32 * 5/9;
        printf("%f is the representation in celcius", c); 
        break;
    default:
        break;
    }
}