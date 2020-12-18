#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned char Check_Perefect_Num(long long int num);
int main()
{
    long long int num=0;
    scanf("%lld",&num);
    if (Check_Perefect_Num(num))
    {
        printf("Prefect Number\n");
    }
    else
    {
        printf("Not a Prefect Number\n");
    }


    return 0;
}

unsigned char Check_Perefect_Num( long long int num)
{
    unsigned long long int sum=0;
    for (unsigned int j=num/2; j>0; j--)
    {
        if (num%j==0)
        {
            sum +=j;
        }
    }
    if (sum == num)
    {
        return 1;
    }
    return 0;
}

/*void Check_Perefect_Num( long long int *range)
{
    unsigned long long int sum=0;
    for(unsigned int i=(*range); i>0; i--)
    {
        for (unsigned int j=i/2; j>0; j--)
        {
            if (i%j==0)
            {
                sum +=j;
            }
        }
        if (sum == i)
        {
            printf("%u\n",i);
        }
        sum=0;
    }
}*/
