#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float  a,b,c;
    float r1,r2,D;
    printf("input a,b,c of ax^2+bx+c : ");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;

    if(D<0)
    {
        printf("Discriminant can not be 0");
        exit(0);
    }

    r1=(-b+sqrt(D))/2*a;
    r2=(-b-sqrt(D))/2*a;

    printf("the roots of the equation  %.1fx^2+%.1fx+%.1f  is %f, %f ",a,b,c,r1,r2);

   return 0;

}