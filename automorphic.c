#include <stdio.h>

int check(int num)
{
    
    int square = num * num;
    
    while(num != 0)
    {
        if(num % 10 != square % 10) //25%10= 5  625%10=5  >> 2,62
            return 0;               // 2%10= 2  62%10=2   >> 0,6
                                    // num =0 ==> exit loop retun 1
        num /= 10;
        square /= 10;
    }

    return 1;
}

int main ()
{
    int num, square;
    printf("Enter the number to check if Automorphic or not: ");
    scanf("%d",&num);
    square = num * num; 
    if(check(num))
        printf("Number is an Automorphic Number");
    else
        printf("Number is an Not Automorphic Number");
    
}
