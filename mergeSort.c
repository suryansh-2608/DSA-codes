#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void merge(int *a, int mid, int low, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++, k++;
        }
        else
        {
            b[k] = a[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++, k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++, k++;
    }
    for(int i = low; i<= high; i++ )
    {
        a[i] = b[i];
    }
}

void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        merge(a, mid, low, high);
    }
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