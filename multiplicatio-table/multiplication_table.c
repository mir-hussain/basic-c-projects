#include <stdio.h>

int main()
{
    int n;

    printf("Enter a non-negative integer number to calculate the table: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}