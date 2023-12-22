#include<stdio.h>

int main()
{
    int row,column,mat[10][10];

    printf("Enter the Number of Rows: ");
    scanf("%d",&row);

    printf("Enter the Number of Column: ");
    scanf("%d",&column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the Element for %d row and %d column : ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("\nThe Matrix is\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    
}