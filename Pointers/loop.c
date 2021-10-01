#include <stdio.h>

void printArray(int*, int);

int main() {
    int a[] = {5,4,2,2,3,5,6,7,77,6,5,3};
    printArray(a,12);
}

void printArray(int* arr, int n) {
    int * p = arr;
    int i;
    for(i = 0; i < n; ++i) {
        (*p)++;
        printf("%d\n",*p);
        p++;
    }
}