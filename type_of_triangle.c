#include <stdio.h>
int main(){
    int s1, s2, s3;
    printf("Enter the sides of the triangle: ");
    scanf("%d%d%d",&s1, &s2, &s3);
    if(s1==s2 && s1==s3 && s2==s3){
        printf("It is an equilateral triangle.");
    }
    else if(s1==s2 || s1==s3 ||s2==s3){
        printf("It is an Isosceles triangle.");
    }
    else if(s1!=s2 && s1!=s3 && s2!=s3){
        printf("It is a Scalene triangle.");
    }
    else{
        printf("Error");
    }
    return 0;
}