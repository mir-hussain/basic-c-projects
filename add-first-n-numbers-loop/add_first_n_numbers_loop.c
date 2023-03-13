#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a valid integer to add numbers to that range (Including that number): ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The total from 1 to %d is %d", n, sum);
}