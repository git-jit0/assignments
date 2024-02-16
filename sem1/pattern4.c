#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

        for (i=0;i<n/2+1;i++)
            {        
        
                for (j=0;j<2*i+1;j++) 
                        printf("*");

                printf("\n");
            }
        for(i=0;i<=n/2-1;i++)
            {
                for(j=0;j<(n/2)-(2*i);j++)
                    printf("*");
                
                printf("\n");
            }

    return 0;
}
