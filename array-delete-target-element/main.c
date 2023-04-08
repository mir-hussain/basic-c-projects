#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, target = 3, size = 5, i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            size--;
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}