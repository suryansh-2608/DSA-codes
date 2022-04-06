#include <stdio.h>

int printr(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        printf("%d\t", n);
        return printr(n-1);
    }
}

int main()
{
    printr(10);
    return 0;
}