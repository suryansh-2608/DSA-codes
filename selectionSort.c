#include <stdio.h>


void printArray(int* a, int n)
{
    for(int  i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void selectionSort(int *a, int n)
{
    printf("Running Selection Sort....\n");
    for(int i = 0; i<n-1; i++)
    {
        int indexOfMin = i;
        for(int j = i+1; j<n; j++)
        {
            if(a[j]<a[indexOfMin])
            {
                indexOfMin = j;
            }

        }
        int temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}

int main()
{
    int a[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(a, n);
    selectionSort(a, n);
    printArray(a, n);
    return 0;
}