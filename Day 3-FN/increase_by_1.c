#include <stdio.h>
#include <stdlib.h>
int* incrementInteger(int* digits, int size, int* newSize)
{
    digits[size - 1] += 1;
    for (int i = size - 1; i > 0; i--)
    {
        if (digits[i] > 9)
        {
            digits[i] %= 10;
            digits[i - 1] += 1;
        }
    }
    if (digits[0] > 9)
    {
        digits[0] %= 10;
        *newSize = size + 1;
        int* result = (int*)malloc((*newSize) * sizeof(int));
        for (int i = 0; i < size; i++)
        {
            result[i + 1] = digits[i];
        }
        result[0] = 1;

        return result;
    }
    *newSize = size;
    return digits;
}
int main()
{
    printf("Enter the number of digits in the integer: ");
    int n;
    scanf("%d", &n);
    int* digits = (int*)malloc(n * sizeof(int));
    printf("Enter the digits: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &digits[i]);
    }
    int newSize;
    int* result = incrementInteger(digits, n, &newSize);
    printf("Result: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
