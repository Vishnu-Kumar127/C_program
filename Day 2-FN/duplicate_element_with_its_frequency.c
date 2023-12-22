#include <stdio.h>

void printDuplicateElements(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int count = 1;
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            count++;
            i++;
        }
        if (count > 1)
        {
            printf("%d->%d, ", arr[i], count);
        }

        i++;
    }
}

int main()
{
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nEntered Array: {");
    for (int i = 0; i < N; i++)
    {
        printf("%d", array[i]);
        if (i < N - 1) 
        {
            printf(", ");
        }
    }
    printf("}\n");
    printf("\nOutput:\n");
    
    printDuplicateElements(array, N);
    return 0;
}
