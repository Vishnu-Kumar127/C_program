#include <stdio.h>

int main() 
{
    int x, y, z;

    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("Enter the value for y: ");
    scanf("%d", &y);
    printf("Enter the value for z: ");
    scanf("%d", &z);

    if ((x > y && x < z) || (x < y && x > z)) 
    {
        printf("1");
    } 
    else if ((y > x && y < z) || (y < x && y > z)) 
    {
        printf("2");
    } 
    else 
    {
        printf("3");
    }

    return 0;
}
