#include <stdio.h>

void printArray(int* a, int n)
{
    for(int  i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void QuickSort(int *a, int n)
{
    printf("Quick Sort is Running.....");
    
    
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    QuickSort(a, n);
    printArray(a, n);
    return 0;
}