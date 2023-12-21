#include <stdio.h>

int main() 
{
    int degree, i;
    double x, result = 0.0;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    double coefficients[degree + 1];
    printf("Enter the coefficients (from highest degree to constant term): ");
    for (i = degree; i >= 0; i--) {
        scanf("%lf", &coefficients[i]);
    }

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    for (i = degree; i >= 0; i--) 
    {
        result += coefficients[i] * pow(x, i);
    }
    printf("P(%.0f) = %lf\n", x, result);

    return 0;
}
