#include<stdio.h>
int main()
{
    float cel , fah;
    printf(" enter temperature in celcius: ");
    scanf("%f",&cel);
    // c/5=f-32/9
    fah=((9*cel)/5)+32;

   printf("The temp in fahrenheit is %.2f",fah);
  
   return 0;

}