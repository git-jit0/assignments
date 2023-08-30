#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    // a b , c=a a=b b=c;
    c=a; a=b; b=c;

    printf("The number is %d%d and swap is %d%d",b,a,a,b);
    /*
    easy way to do it, 
    swap in print.
    am i right?
    */
    
    return 0;
}