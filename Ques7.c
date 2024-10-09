//Write a C program to determine elegibility for admission to a professional cause based on the following criteria:
// Eligibility criteria:
// marks in maths >=65
// marks in physics >=55
// marks in chemistry >= 50
// Total in all three subjects >=150
// Total in maths and physics >=140

#include <stdio.h>
int main(){
    int maths, physics, chem, total;
    printf("Enter the marks of Maths: ");
    scanf("%d", &maths);
    printf("Enter the marks of Physics: ");
    scanf("%d", &physics);
    printf("Enter the marks of Chemistry: ");
    scanf("%d", &chem);
    total = maths+chem+physics;
    if((maths>=65 && physics >=55 && chem>=50) || (total >=190) || (maths+physics >=140))
    {
        printf("You are eligible for admission");
    }
    else{
        printf("Sorry! you are not eligible for admission");
    }
    return 0;
}