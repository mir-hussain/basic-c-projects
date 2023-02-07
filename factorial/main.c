#include <stdio.h>

int main()
{
    int n, i, factorial = 1;

    printf("Enter a non zero positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input.");
    }
    else if (n == 0)
    {
        printf("Factorial = %d", factorial);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("Factorial = %d", factorial);
    }

    return 0;
}