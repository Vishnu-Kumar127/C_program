#include <stdio.h>
#include <stdbool.h>

bool hasPairWithSum(int arr[], int n, int X) 
{
    int hashTable[100000] = {0};

    for (int i = 0; i < n; i++) 
    {
        int complement = X - arr[i];

        if (hashTable[complement] == 1) 
        {
            return true; 
        }

        hashTable[arr[i]] = 1;
    }

    return false; 
}

int main() 
{
    int N, X;

    printf("Enter the size of the array: ");
    scanf("%d", &N);
    printf("Enter the target sum: ");
    scanf("%d", &X);

    int Arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; ++i) 
    {
        printf("%d : ",(i+1));
        scanf("%d", &Arr[i]);
    }

    if (hasPairWithSum(Arr, N, X)) 
    {
        printf("Yes");
    } 
    else 
    {
        printf("No");
    }
    return 0;
}