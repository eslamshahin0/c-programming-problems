
#include <stdio.h>

int GCD(int a, int b)
{
    int temp;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;

    while ((a!=0) && (b!=0))
    {
        if (a > b)
        {
            temp=a;
            a =b;
            b =temp%b;
        }
        if (b > a)
        {
             temp=b;
            b =a;
            a =temp%a;
        }
    }


return a==0?b:a;

}

int main()
{
    int a = 56, b = 98;
   int c=  GCD(a, b);
    printf("GCD of %d and %d is %d ", a, b,c);
    return 0;
}
