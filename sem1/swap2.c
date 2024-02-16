#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
          // a=2 b=3
    a=a+b;// a=a+b => 2+3=5 => a=5
    b=a-b;// b=a-b => 5-3=2 => b=2
    a=a-b;// a=a-b => 5-2=3 => a=3

    printf("The swap is %d%d",a,b);
    
    return 0;
}


