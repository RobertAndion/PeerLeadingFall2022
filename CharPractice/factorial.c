// Take a number and calculate the factorial from it. 5! = 5 * 4 * 3 * 2 * 1
#include <stdio.h>
int main() {
    int i;
    int factorial = 1;
    int userInput;

    printf("Enter a number to calculate the factorial.\n");
    scanf("%d", &userInput);
    for(i = userInput; i > 1; --i) {
        factorial *= i;
    }
    printf("%d\n", factorial);
    factorial = 1;
    
    i = userInput;
    while (i > 1) {
        printf("I: %d\n", i);
        factorial *= i;
        --i;
    }
    printf("%d\n", factorial);

    return 0;
}