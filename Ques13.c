//  Find Even/Odd number using bitwise operator

#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result = (num&1)?1:0;
    if(result==1){
        printf("Number is odd\n");
    }
    else{
        printf("Number is even\n");
    }
    return 0;
}