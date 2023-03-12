#include <stdio.h>

void arraySorter(int arr[10]);

int main()
{
    int numbers[10] = {4, 7, 8, 9, 14, 5, 13, 14, 15, 6};

    arraySorter(numbers);
}

void arraySorter(int arr[10])
{
    int odds[10], evens[10], odd_count = 0, even_count = 0;

    for (int i = 0; i < 10; i++)
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
