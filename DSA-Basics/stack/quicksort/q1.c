#include <stdio.h>

void quickSort(int a[], int l, int h)
{
    if (l < h)
    {
        int p = a[h], i = l - 1, j, t;

        for (j = l; j < h; j++)
            if (a[j] < p)                       
            {
                t = a[++i];
                a[i] = a[j];
                a[j] = t;
            }

        t = a[i + 1];
        a[i + 1] = a[h];
        a[h] = t;

        printf("Pivot: %d, Index: %d\n", p, i + 1);

        int k = i + 1;
        quickSort(a, l, k - 1);
        quickSort(a, k + 1, h);
    }
}

int main()
{
    int a[] = {11,22,33,44,55,66},i;
    quickSort(a, 0, 5);

    printf("Sorted: ");
    for (i = 0; i<6; i++)
        printf("%d ", a[i]);

    return 0;
}