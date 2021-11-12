#include <stdio.h>
#include <stdlib.h>

struct computer {
    char cpu[50];
    double ram;
};

int main() {
    int numberOne = 10;
    int * numberTwo = malloc(sizeof(int));
    *numberTwo = 15;
    free(numberTwo);
    numberTwo = &numberOne;
    printf("%d \t %d\n", numberOne,*numberTwo);

    struct computer pc1;
    struct computer *pc2 = malloc(sizeof(struct computer));
    pc1.ram = 24;
    pc2->ram = 32; // (*pc2).ram = 32;
}
