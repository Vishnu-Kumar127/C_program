#include <stdio.h>

int main() 
{
    char input[100];

    printf("Input: ");
    scanf("%s", input);

    int i = 0;
    while (input[i] != '\0') 
    {
        char character = input[i];
        i++;

        int count = 0;
        while (input[i] >= '0' && input[i] <= '9') 
        {
            count = count * 10 + (input[i] - '0');
            i++;
        }

        for (int j = 0; j < count; j++) 
        {
            printf("%c", character);
        }
    }

    printf("\n");

    return 0;
}