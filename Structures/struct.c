#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_SIZE 100

struct toy // Structure to hold a toy
{
    char name[MAX_STRING_SIZE];
    char location[MAX_STRING_SIZE];
    double price;
    int modelNumber;
};
void printToy(struct toy);

int main()
{
    struct toy firstToy;
    struct toy secondToy = {"Chucky", "E10",19.99, 666};
    char * nameFurby = "Furby";
    char * p;
    int i = 0;
    for(p = nameFurby; *p != '\0'; p++, i++) {
        firstToy.name[i] = *p;
    }
    firstToy.name[i] = '\0';
    firstToy.price = 14.99;
    firstToy.modelNumber = 256;
    strcpy(firstToy.location, "F12");
    // Struct function example
    printToy(firstToy);
    printToy(secondToy);
    // Struct array example
    struct toy toyCollection[10];
    toyCollection[0] = firstToy;
    toyCollection[1] = secondToy;
    printToy(toyCollection[0]);
    // Struct pointer example
    struct toy * tp = &firstToy;

    printf("%s\n", tp->name); // (*tp).name === tp->name
}

// Function to pretty print a struct
void printToy(struct toy in) {
    printf("%s\t%s\t%.2f\t%d\n", in.name, in.location, in.price, in.modelNumber);
}