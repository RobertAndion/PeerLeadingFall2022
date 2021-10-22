#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *p;
    for (p = arr; p < arr + 9; p++) {
        printf("%d\n",*p);
    }
}

/*int* test(int* one) {
    int * new = *one;
    return new;
}*/
