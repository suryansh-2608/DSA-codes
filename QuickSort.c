#include <stdio.h>

void printArray(int* a, int n)
{
    for(int  i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int partition(int *a, int low, int high)
{
    int pivot = a[low];
    int i = low+1;
    int j = high;
    do{
    while(a[i] <= pivot)
    {
        i++;
    }

    while(a[j]>pivot)
    {
        j--;
    }

    if(i<j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    }while(i<j);

    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;

}

void QuickSort(int *a, int low, int high)
{
    int partitionIndex;
    if(low<high)
    {
        partitionIndex = partition(a, low, high);

        QuickSort(a, low, partitionIndex-1);
        QuickSort(a, partitionIndex+1, high);
    }

}

int main()
{
    int a[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(a, n);
    QuickSort(a, 0, n-1);
    printArray(a, n);
    return 0;
}