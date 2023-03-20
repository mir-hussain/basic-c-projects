#include <stdio.h>

int main()
{
    int length = 0;

    printf("Enter the array length: ");
    scanf("%d", &length);
    printf("\n");

    int arr[length], even_sum = 0, odd_sum = 0;

    printf("Enter the array elements: \n");

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < length; j++)
    {
        if (arr[j] % 2 == 0)
        {
            even_sum += arr[j];
        }
        else
        {
            odd_sum += arr[j];
        }
    }

    printf("The sum of odd elements are: %d \n", odd_sum);
    printf("The sum of even elements are: %d", even_sum);
}