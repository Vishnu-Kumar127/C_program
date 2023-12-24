#include <stdio.h>

void findSecondLargest(int arr[], int n) 
{
    if (n < 2) 
    {
        printf("Array size should be at least 2\n");
        return;
    }

    int firstLargest = arr[0];
    int secondLargest = -1; 

    for (int i = 1; i < n; ++i) 
    {
        if (arr[i] > firstLargest) 
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } 
        else if (arr[i] < firstLargest && arr[i] > secondLargest) 
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) 
    {
        printf("All elements are same\n");
    } 
    else 
    {
        printf("Second largest distinct element is: %d\n", secondLargest);
    }
}

int main() 
{
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int Arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; ++i) 
    {
        printf("%d : ",(i+1));
        scanf("%d", &Arr[i]);
    }

    findSecondLargest(Arr, N);

    return 0;
}