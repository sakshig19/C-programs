#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character to check whether it is vowel or consonent: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("It is a vowel.");
    }
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("It is a consonent.");
    }
    else{
        printf("It is a not an alphabet.");
    }
    return 0;
}