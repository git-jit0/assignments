#include <stdio.h>

int LCM(int a, int b);
int GCD(int a, int b);

int main() {
    int a, b;
    printf("Enter two numbers to find GCD and LCM: ");
    scanf("%d %d", &a, &b);

    int lcm = LCM(a, b);
    int gcd = GCD(a, b);

    printf("LCM is %d\n", lcm);
    printf("GCD is %d\n", gcd);
    return 0;
}

int LCM(int a, int b) {
    int max = (a > b) ? a : b;
    int lcm = max;

    for(int i= lcm;i<=a*b;i++)
    {
        if (lcm % a == 0 && lcm % b == 0) 
        {
            return lcm;
            break;
        }
        
    }
}

int GCD(int a, int b) 
{
    int max =a>b?b:a;
    int gcd = max;
    for(int i=max;i>=1;i--)
        {
            if(a%i==0&&b%i==0)
                {
                    return gcd;
                    break;
                }
        }

    return a;
}