// create a function to read in a string until a new line, exclude beginning white space, using index arithmetic.
#include <stdio.h>
#define MAX_STRING_SIZE 100
int readLine(char[], int);
int getStringLength(char arr[]);
int main() {
    char myArrayString[MAX_STRING_SIZE + 1];
    readLine(myArrayString, MAX_STRING_SIZE);
    printf("%s\n", myArrayString);
    printf("%d\n", getStringLength(myArrayString));
    return 0;
}

int readLine(char arr[], int maxSize) { // Expects an empty character array and max size.
    int stringSize = 0;
    char temp;
    temp = getchar();
    while(temp == ' ') {
        temp = getchar();
    }
    while(temp != '\n' && stringSize <= maxSize) {
        arr[stringSize] = temp;
        stringSize++;
        temp = getchar();
    }
    arr[stringSize] = '\0';
    return stringSize;
}

int getStringLength(char arr[]) { // Not 100% perfect but was used as an example to show how to go through a string until '\0'.
    int length = 0;
    char* ch = arr;
    if(*ch == '\0')
        return 0;

    while(*(ch++) != '\0')
        length++;

    return length;
}