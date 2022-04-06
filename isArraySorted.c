#include <stdio.h>

int isArraySorted(int a[], int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (a[n-1]<a[n-2] ?0: isArraySorted(a, n-1));
    }
}

int main()
{
    int b[] ={1,5,3,4}; 
    int a = isArraySorted(b, 4);
    printf("%d\n", a);
    return 0;
}