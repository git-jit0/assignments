#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number of row till to print pascal's triangle");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(int k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for( j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}