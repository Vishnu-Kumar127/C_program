#include <stdio.h>

void swapByValue(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swap By Value \na=%d\nb=%d\n", a, b);
}

void swapByReference(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap By Reference \na=%d\nb=%d\n", *a, *b);
}

int main() 
{
    int num1, num2,num3,num4;

    printf("\t\tBy using Swap By Value:\n");

    printf("Enter first numbers: ");
    scanf("%d1", &num1);

    printf("Enter Second numbers: ");
    scanf("%d", &num2);

    printf("Before swapping: \na=%d\nb=%d\n", num1, num2);
    swapByValue(num1, num2);

    printf("\t\tBy using Swap By Reference:\n");
    
    printf("Enter first numbers: ");
    scanf("%d", &num3);

    printf("Enter Second numbers: ");
    scanf("%d", &num4);

    printf("Before swapping: \na=%d \nb=%d\n", num3, num4);
    swapByReference(&num3, &num4);
    return 0;
}