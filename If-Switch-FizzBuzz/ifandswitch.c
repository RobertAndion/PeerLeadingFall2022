#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main()
{
    int switchExampleVariable = 0;

    if (FALSE) // This is to teach booleans and if syntax.
    {
        printf("Test");
    }
    else if (FALSE && TRUE)
    {
        printf("Test2");
    }
    else
    {
        printf("Neither\n");
    }

    switch (switchExampleVariable)
    {
    case 0:
        printf("Case one\n");
        break;
    case 1:
        printf("Case two\n");
        break;
    case 2:
        printf("Case three\n");
        break;
    default:
        printf("None of the above");
    }
}