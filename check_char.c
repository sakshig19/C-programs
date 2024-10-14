#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character to check weather it is a numeric value, alphabet or a special symbol: ");
    scanf("%c", &ch);
    if(ch>=48 && ch<=57){
        printf("It is a number");
    }
    else if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
        printf("It is an alphabet");
    }
    else if(ch>=32 && ch<=126){
        printf("It is a special symbol");
    }
    else{
        printf("Wrong input");
    }
}