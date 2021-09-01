#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    // addition calculator, using decimal numbers and doubles.
    int firstNumber, secondNumber;
    int a = 5, b = 7, c = 250, d = 4000;
    printf("Enter your first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    printf("Sum: %d \n", firstNumber + secondNumber);
    // result = firstNumber + secondNumber;
    printf("Enter both numbers, pressing enter after entering each one. \n");
    scanf("%d%d", &firstNumber, &secondNumber);
    printf("Result: %d\n", firstNumber + secondNumber);

    printf("#####\n"); // consistent printing i.e. printf(%5d) or "%2.2d\n"
    printf("%8.4d\n", a);
    printf("%8.4d\n", b);
    printf("%8.4d\n", c);
    printf("%8.4d\n", d);
    printf("%8.4d\n", firstNumber);
    printf("#####\n");
    double test1, test2;
    printf("Enter two numbers seperated by spaces, int or double to see the summation.\n");
    scanf("%lf %lf", &test1, &test2);
    printf("Sum: %f\n", test1 + test2);
    return 0;
}
