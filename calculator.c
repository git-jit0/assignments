#include<stdio.h>
#include<stdlib.h>
int main()
{
    char opt;
    double num1,num2,num3;

    printf("enter expression to perform ");
    printf("(+,-,*,/): ");
    scanf("%c",&opt);
    
    switch (opt)
    {
    case '+': 
            printf("Enter the numbers for addition: ");
            scanf("%lf%lf",&num1,&num2);
            num3=num1+num2;
            printf(" %lf + %lf = %lf",num1,num2,num3);
        break;
    
    case '*': 
            printf("Enter the numbers for multiplication: ");
            scanf("%lf%lf",&num1,&num2);
            num3=num1*num2;
            printf("%lf * %lf = %lf",num1,num2,num3);
        break;
    
    case '-':
            printf("Enter the numbers for substraction: ");
            scanf("%lf%lf",&num1,&num2);
            num3=num1-num2;
            printf("%lf - %lf = %lf",num1,num2,num3);
        break;

    case '/':
            printf("Enter the numbers for division: ");
            scanf("%lf%lf",&num1,&num2);
            if(num2==0) { printf("Divisor can not be 0");    exit(0);        }
            if(num1==0) { printf("%lf / %lf = 0",num1,num2); exit(0);        }
            num3=num1/num2;
            printf("%lf / %lf = %lf",num1,num2,num3); 
        break;

    default:
            printf("Error!,  Enter proper expression.....(+,-,*,/)");
        break;
    }

}