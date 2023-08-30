#include<stdio.h>

int main()
{
    int a,area,perimeter;
    printf("Enter the length of the side of the rectangle: ");
    scanf("%d",&a);

    area=a*a;
    perimeter=4*a;

    printf("The area is %d and the perimetrer is %d",area,perimeter);

    return 0;
}