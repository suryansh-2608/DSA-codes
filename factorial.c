#include <stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        return -1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    printf("%d\n", factorial(1));
    printf("%d\n", factorial(0));
    printf("%d\n", factorial(-45));
    printf("%d\n", factorial(5));
    return 0;
}