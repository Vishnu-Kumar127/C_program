#include <stdio.h>

int main() 
{
    int rows,cols;
    int odd  = 1;
    int even = 2;

    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);

    printf("Enter the Number of Column: ");
    scanf("%d",&cols);

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= cols; j++) 
        {
            if (i%2 == 1)
            {
                if (i + j > cols) 
                {
                    printf(" %2d", odd);
                    odd += 2;
                } 
                else 
                {
                printf("   ");
                }
            }
            else
            {
                if (i + j > cols) 
                {
                    printf(" %2d", even);
                    even += 2;
                } 
                else 
                {
                    printf("   ");
                }
            }   
        }
        printf("\n");
    }
    return 0;
}