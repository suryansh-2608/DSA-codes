#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int* a, int n)
{
    for(int  i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int maximum(int *a, int n)
{
    int max = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;


}

void CountSort(int *a, int n)
{
    int i, j;
    int max = maximum(a, n);
    int * count = (int *)malloc((max+1) * sizeof(int));
    for ( i = 0; i < max+1; i++)
    {
       count[i] = 0;
    }

    for ( i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }

    i = 0;
    j = 0;
    
    while (i<=max)
    {
        if(count[i]>0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
    
    
    
}

int main()
{
    int a[] = {3, 1, 9, 7, 1, 2, 4};
    int n = 7;
    printArray(a, n);
    CountSort(a, n);
    printArray(a, n);
    return 0;
}