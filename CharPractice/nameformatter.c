// Read in a users first and last name then print last name comma first initial perion.
// i.e. John Doe will output Doe, J.
#include <stdio.h>
int main() {
    char firstName[30];
    char lastName[50];
    int i;
    printf("Please enter your first and last name seperated by a space.\n");
    scanf("%s %s", &firstName, &lastName);
    printf("%s, %c.\n", lastName, firstName[0]);

    return 0;

}