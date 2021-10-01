#include <stdio.h>
void printArray(int *, int n);
void selectionSort(int *, int *);

int main()
{
    int a[] = {2, 5, 8, 7, 4, 2, 1, 1, 1};
    selectionSort(a, &a[9]);
    printArray(a, 9);
}

void selectionSort(int *arr, int *end)
{
    int *outer, *inner, *min;
    for (outer = arr; outer != end; outer++)
    {
        min = outer;
        for (inner = outer; inner < end; inner++) {
            if (*inner < *min)
                min = inner;
        }
        int temp = *outer;
        *outer = *min;
        *min = temp;
    }
}

void printArray(int *arr, int n)
{
    int *p = arr;
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", *p);
        p++;
    }
}