#include <stdio.h>

void arraySorter(int arr[], int size);

int main()
{
    int n;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter  a number: ");
        scanf("%d", &numbers[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", numbers[j]);
    }
    printf("\n");

    arraySorter(numbers, n);
}

void arraySorter(int arr[], int size)
{
    int odds[size], evens[size], odd_count = 0, even_count = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 == 0)
        {
            odds[odd_count] = arr[i];
            odd_count++;
        }
        else
        {
            evens[even_count] = arr[i];
            even_count++;
        }
    }

    printf("Odd Numbers: ");
    for (int j = 0; j < odd_count; j++)
    {
        printf("%d ", odds[j]);
    }
    printf("\n");

    printf("Even Numbers: ");
    for (int k = 0; k < even_count; k++)
    {
        printf("%d ", evens[k]);
    }
}
