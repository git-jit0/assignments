#include<stdio.h>
int main()
{
    int call;
    float rent,total;
    printf("enter the number of calls: \t");
    scanf("%d",&call);
 
    // 1st 100 =.2, 2nd 100 =.3, remaining = .5
    if(call<=100 && call>=0)
    {
        rent=call*.2;
        total=rent+250;
        printf("Price of call is %f and total rent with 250 telephone rental is %f",rent,total);   
    }

    else if(call>100&&call<=200)
    {
        rent=((call-100)*.3)+(100*.2);
        total=rent+250;
        printf("Price of call is %f and total rent with 250 telephone rental is %f",rent,total);
    }

    else
    {
        rent=((call-200) *.5)+(100 *.3)+(100 *.2);
        total=rent+250;
        printf("Price of call is %f and total rent with 250 telephone rental is %f",rent,total);
    }

   
    return 0;
}