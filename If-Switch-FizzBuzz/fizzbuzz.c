#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

// FizzBuzz challange. Print 1-20 but every number divisible by 3 is replaced with fizz
// and any number divisible by 5 is replaced with buzz, numbers divisible by both are
// replaced with FizzBuzz (9-3-21)

int main()
{
    int i;
    // Start of FizzBuzz Program
    for (i = 1; i < 101; ++i)
    {
        if(i % 3 == 0 && i % 5 == 0) { // If Else switch version
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        /*
        // if only version
        if(i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        if(i % 3 == 0) {
            printf("Fizz\n");
            continue;
        }

        if(i % 5 == 0) {
            printf("Buzz\n");
            continue;
        }*/

        printf("%d\n", i);
    }

    return 0;
}
