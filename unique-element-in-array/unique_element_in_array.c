#include <stdio.h>

int main()
{
    int arr1[5] = {1, 1, 2, 3, 4}, arr2[5], flag = 0, count = 0, i, j;

    for (i = 0; i < 5; i++)
    {
        flag = 0;
        for (j = 0; j < 5; j++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    flag++;
                }
            }
        }

        if (flag == 0)
        {
            arr2[count] = arr1[i];
            count++;
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%d ", arr2[i]);
    }
}