#include <stdio.h>
int maxSubArray(int nums[], int size)
{
    int maxSum = nums[0];
    int currentSum = nums[0];
    for (int i = 1; i < size; i++)
    {
        if (currentSum > 0)
        {
            currentSum += nums[i];
        } 
        else
        {
            currentSum = nums[i];
        }

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int result = maxSubArray(nums, n);
    printf("Maximum subarray sum: %d\n", result);
    return 0;
}
