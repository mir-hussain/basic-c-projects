#include <stdio.h>

int main()
{
    int sum = 0, arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("Sum = %d", sum);
}