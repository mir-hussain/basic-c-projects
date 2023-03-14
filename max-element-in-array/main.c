#include <stdio.h>

int main()
{
    int arr[10] = {4, 5, 3, 5, 6, 7, 7, 11, 4, 33};
    int max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The maximum element is: %d", max);
}