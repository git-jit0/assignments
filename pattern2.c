#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter then number os rows: ");
    scanf("%d",&n);
      
      for (i=0;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("%d",j);
                }
            printf("\n");     
        }
    return 0;
}