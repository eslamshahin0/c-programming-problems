#include <stdio.h>
#include <stdlib.h>

 long long Maximum_Pairwise_Product(long long *arr, int num);

int main()
{
    int array_size=0;
    scanf("%d",&array_size);

    long long int array[array_size];

    for (int i=0; i<array_size; i++)
    {
        scanf("%lld",&array[i]);
    }

    printf("%lld\n",Maximum_Pairwise_Product(array, array_size));

    return 0;
}

 long long Maximum_Pairwise_Product( long long *arr, int num)
{
    long long temp=0;/* to store the result*/
    int index1 =-1, index2=-1;
    unsigned int i ;
    for ( i =0; i<num; ++i)
    {
        if ((index1==-1) || (arr[i]>temp))
        {
            temp =arr[i];
            index1=i;
        }

    }
    temp=0; /* to get the sec number*/
    for (i=0; i<num; ++i)
    {
        if (i==index1) {}//skip the index of the frist large element
        else
        {
            if ((index2==-1) || (arr[i]>temp))
            {
                temp =arr[i];
                index2 =i;
            }
        }
    }
    return (long long)(arr[index1])*(arr[index2]);
}
