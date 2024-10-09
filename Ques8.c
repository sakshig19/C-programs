// Write a C program to read the roll number, Name and marks of three subjects and calculate the total, percentage and division.

#include <stdio.h>
#include <string.h>
int main(){
    char name[50];
    int roll_no=0, english = 0, hindi=0, maths=0, total=0;
    float percentage=0;
    printf("Enter your Name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Enter your roll number: \n");
    scanf("%d", &roll_no);

    printf("Enter the marks in English: \n");
    scanf("%d", &english);

    printf("Enter the marks in Hindi: \n");
    scanf("%d", &hindi);

    printf("Enter the marks in Maths: \n");
    scanf("%d", &maths);

    total = english + hindi + maths;
    percentage = (float)total /3;

    printf("----RESULTS----\n");
    printf("Name: %sRoll Number: %d\n", name, roll_no);
    printf("-----Marks Scored-----\nEnglish: %d\nHindi: %d\nMaths: %d\n",english, hindi, maths);
    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}