#include <stdio.h>

int main()
{

    int arr1[5] = {1, 2, 2, 2, 2}, arr2[5], arr3[5], duplicate_count = 0, count = 1, i, j;

    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
        arr3[i] = 0;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[j] = count;
                count++;
            }
        }
        count = 1;
    }

    for (i = 0; i < 5; i++)
    {
        if (arr3[i] == 2)
        {
            duplicate_count++;
        }
    }

    printf("Total duplicate count is %d", duplicate_count);
}