#include <stdio.h>
int main(){
    int n;
    printf("Enter the signed number: ");
    scanf("%d",&n);
    if(n>=0){
        printf("The number is positive");
    }
    else if(n<0){
        printf("The number is negative");
    }
    else{
        printf("Error");
    }
    return 0;
}