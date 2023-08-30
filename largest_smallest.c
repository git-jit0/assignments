#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers to compare: ");
    scanf("%d%d%d",&a,&b,&c);

    // largest number logic
    if(a>b)
        {
            if(a>c)
             printf("%d is the largest number\n",a);
            else
                printf("%d is the largest number\n",c) ;   
        }

    else
        {
            if(b>c)
                printf("%d is the largest number\n",b);
            else
                printf("%d is the largest number\n",c);
        }
    
    // smallest number logic
    if(a<b)
        {
            if(a<c)
             printf("%d is the smallest number",a);
            else
                printf("%d is the smallest number",c) ;   
        }

    else
        {
            if(b<c)
                printf("%d is the smallest number",b);
            else
                printf("%d is the smallest number",c);
        }

    return 0;
}