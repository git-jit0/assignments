#include<stdio.h>

int main()
{
    printf("enter a number to find absolute value: \t");
    int a;
    scanf("%d",&a);

    if(a<0)
      a=a*(-1);
    printf("absolte value is %d",a);

    return 0;  
        
}