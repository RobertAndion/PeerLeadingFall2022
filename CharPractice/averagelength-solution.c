// Read in a users input character by character and average all word lengths.
#include <stdio.h>
int main()
{
    char cur;
    int count = 0;
    double sum = 0;
    cur = getchar();
    while (cur != '\n')
    {
        if (('a' <= cur && cur <= 'z') || ('A' <= cur && cur <= 'Z'))
        {
            sum++;
            cur = getchar();
        }
        else
        {
            count++;
            cur = getchar();
            while (cur == ' ')
            {
                cur = getchar();
                if (cur == '\n')
                {
                    break;
                }
            }
        }
    }
    count++;
    printf("Average word length: %.2f\n", sum / count);
}