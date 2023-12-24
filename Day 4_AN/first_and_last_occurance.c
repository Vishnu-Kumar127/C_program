#include <stdio.h>

void findFirstAndLast(int arr[], int n, int x) 
{
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) 
        {
            first = i;
            last =i;
            break;
        }
    }

    for (int i = first; i < n; i++) 
    {
        if (arr[i] == x) 
        {
            last = i;
            
        }
    }

    printf("First occurrence of %d is at index %d\n", x, first);
    printf("Last  occurrence of %d is at index %d\n", x, last);
    
}

int main() 
{
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the sorted array:\n");

    for (int i = 0; i < n; ++i) 
    {
        printf("%d : ",(i+1));
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find: ");
    scanf("%d", &x);

    findFirstAndLast(arr, n, x);

    return 0;
    
}