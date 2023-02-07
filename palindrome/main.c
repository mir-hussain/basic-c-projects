#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, flag = 1;
    char str[30];

    printf("Enter your string: ");
    gets(str);

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("This is a Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}