#include <stdio.h>

void swap(int*, int*);

int main()
{
    int a = 5, b = 10;
    printf("%d\t%d\n", a, b);
    swap(&a, &b);
    printf("%d\t%d\n", a, b);
}

void swap(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}