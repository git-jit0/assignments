#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter then number os rows: ");
    scanf("%d",&n);
      
      for (i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
                {
                    printf("*");
                }
            printf("\n");     
        }
    return 0;
}