#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[5];

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%d ", arr2[j]);
    }
}