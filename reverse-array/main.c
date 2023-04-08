#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[5], i, j;

    for (i = 4, j = 0; i >= 0; i--, j++)
    {
        arr2[j] = arr1[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}