#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<=n/2;i++)
    {
        for(j=0;j<=n/2-i-1;j++)
        {
            printf("*");
        }
        if(i==n/2-1)
            break;
        printf("\n");
    }
    for(i=0;i<=n/2;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

