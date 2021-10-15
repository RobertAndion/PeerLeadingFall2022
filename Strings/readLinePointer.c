// create a function to read in a string until a new line, exclude beginning white space, using pointer arithmetic.
#include <stdio.h>
#define MAX_STRING_SIZE 10

int readLine(char* arr, int maxSize);

int main() {
    char myArrayString[MAX_STRING_SIZE + 1];
    readLine(myArrayString, MAX_STRING_SIZE);
    printf("%s\n", myArrayString);
    return 0;
}

int readLine(char* arr, int maxSize) {
    char * p = arr;
    char ch;
    int stringSize = 0;
    while((ch = getchar()) != '\n' && stringSize <= maxSize) {
        *p = ch;
        p++;
        stringSize++;
    }
    *p = '\0';

    return stringSize;

}