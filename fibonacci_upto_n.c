#include<stdio.h>
int main()
{
    int num,a,sum=0,f0=0,f1=1;
    printf("enter the n-th term: ");
    scanf("%d",&num);
    if(num<0)
        {
            printf("Error....!!(number can not be negetive)   ");
            return 0;
        }
    printf("fibonacci series upto f(%d) is-  \n0  ",num);
    for(a=0;a<num;a++)
    {
        f0=f1;
        f1=sum;
        sum=f0+f1;
        printf("%d\t",sum);
        
    }
    
    return 0;
}