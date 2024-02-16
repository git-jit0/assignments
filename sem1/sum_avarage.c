#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;

    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    avg=(a+b+c)/3;

    printf("The sum is %d and the avg is %d",sum,avg);

    return 0;
}