#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[10] = {3, 4, 6, 11, 13, 5, 9, 13, 16, 17};
    int temp;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int k = 0; k < 10; k++)
    {
        printf("%d ", arr[k]);
    }
}