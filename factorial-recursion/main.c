#include <stdio.h>

int fact(int num);

int main()
{

    int num, factorial;

    printf("Enter a positive integer number: ");
    scanf("%d", &num);
    printf("\n");

    factorial = fact(num);

    printf("Factorial of %d is %d", num, factorial);
}

int fact(int num)
{

    if (num == 0 || num == 1)
    {
        return 1;
    }

    return num * fact(num - 1);
}