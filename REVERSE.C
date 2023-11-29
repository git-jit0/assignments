#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i;
    int size= sizeof(arr)/ sizeof(arr[0]);

    for(i=0;i<size;i++)
    {
        int start = 0;
        int end = size - 1;

    while (start < end) {
       
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(i=0;i<size;i++)
    {
        printf("%3d",arr[i]);
    }

    }
}