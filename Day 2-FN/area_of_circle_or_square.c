#include <stdio.h>

int main() 
{
    char shape;

    printf("Enter the shape ('S' for Square, 'C' for Circle): ");
    scanf(" %c", &shape);

    if (shape == 'S' || shape == 's') 
    {
        double side;
        printf("Enter the side length of the square: ");
        scanf("%lf", &side);

        double area = side * side;
        printf("Area of the square: %.3lf\n", area);
    } 
    else if (shape == 'C' || shape == 'c') 
    {
        double radius;
        printf("Enter the radius of the circle: ");
        scanf("%lf", &radius);

        double area = (22/7) * radius * radius;
        printf("Area of the circle: %.4lf\n", area);
    } else {
        printf("Invalid shape entered.\n");
    }
    return 0;
}