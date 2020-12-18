#include <stdio.h>
#include <stdlib.h>

#define MAX 40
int main()
{
    
    int x;
    scanf("%d",&x);
    unsigned long int Fibonacci_arr[]= {0,1}; // init the frist 2 numbers
    int i;
    for ( i=2 ; i<x ; i++)
    {
        Fibonacci_arr[i]=Fibonacci_arr[i-1]+Fibonacci_arr[i-2];
        // printf("%lu\n",Fibonacci_arr[i]%10);
    }
     printf("%lu\n",Fibonacci_arr[--i]);
    return 0;
}

