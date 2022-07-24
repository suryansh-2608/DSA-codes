#include <stdio.h>

void printArray(int* a, int n)
{
    for(int  i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void bubbleSort(int *a, int n)
{
    int isSorted = 0;
    for(int i = 0; i<n-1; i++)
    {
        printf("Working on pass number: %d\n", i+1);
        isSorted = 1;
        for(int j = 0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            return;
        }
    }
}



int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    printArray(a, n);
    bubbleSort(a, n);
    printArray(a, n);
    return 0;
}