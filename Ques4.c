//  WAP to calculate the area and parameter of a circle
#include <stdio.h>
int main(){
    int r,area,p;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    area = 3.14 *r *r;
    p = 2 * 3.14 *r;
    printf("The area of circle is : %d\n", area);
    printf("The Perimeter of circle is : %d\n", p);
    return 0;
}