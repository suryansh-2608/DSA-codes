#include <stdio.h>

void printArray(int* a, int n)
{
    for(int  i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;
    printArray(a, n);
    MergeSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}