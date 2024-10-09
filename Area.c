#include <stdio.h>
int main(){
    int l, b, area,base, height,choice, p;
    float r;
    printf("Enter the Choice you want to perform: \n1.Rectangle\n2.Triangle\n3.Circle\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: //rectangle
        printf("Enter the lenght of the rectangle: ");
        scanf("%d",&l);
        printf("Enter the breadth of the rectangle: ");
        scanf("%d",&b);
        area = l*b;
        p = 2 * (l +b);
        printf("The area of Rectangle is %d\n", area);
        printf("The Perimeter of Rectangle is %d\n", p);
        break;

    case 2: //Triangle
        int s1, s2,s3;
        printf("Enter the base of the triangle: ");
        scanf("%d", &base);
        printf("Enter the height of the triangle: ");
        scanf("%d", &height);
        printf("Enter the sides of the triangle: ");
        scanf("%d %d %d", &s1, &s2, &s3);
        area = 1/2 * base *height;
        p = s1+s2+s3;
        printf("The area of Triangle is %d\n", area);
        printf("The Perimeter of Triangle is %d\n", p);
        break;

    case 3: //circle
        printf("Enter the radius of the circle:");
        scanf("%d",&r);
        area = 3.14 *r *r;
        p = 2 * 3.14 *r;
        printf("The area of circle is %d\n", area);
        printf("The Perimeter of circle is %d\n", p);
        break;
    
    default:
        break;
    }
}