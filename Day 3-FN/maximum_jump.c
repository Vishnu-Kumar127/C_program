#include <stdio.h>
#include <stdlib.h>
int canJump(int nums[], int size)
{
    int maxReach = 0;
    for (int i = 0; i < size; i++)
    {
        if (i > maxReach)
        {
            return 0;
        }
        maxReach = (i + nums[i] > maxReach) ? i + nums[i] : maxReach;
        if (maxReach >= size - 1)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int result = canJump(nums, n);
    printf("Result: %s\n", result ? "true" : "false");
    free(nums);
    return 0;
}
