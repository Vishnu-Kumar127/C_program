#include <stdio.h>
#include <string.h>

void justifySentence(char sentence[], int screenLength) 
{
    int len = strlen(sentence);
    int spaces = 0;

    for (int i = 0; i < len; i++) 
    {
        if (sentence[i] == ' ') 
        {
            spaces++;
        }
    }

    int starsToAdd = screenLength - len + spaces;

    int starsPerSpace = starsToAdd / spaces;

    int remainingStars = starsToAdd % spaces;

    for (int i = 0; i < len; i++) 
    {
        if (sentence[i] == ' ') 
        {
            for (int j = 0; j < starsPerSpace; j++) 
            {
                printf("*");
            }

            if (remainingStars > 0) 
            {
                printf("*");
                remainingStars--;
            }
        } 
        else 
        {
            printf("%c", sentence[i]);
        }
    }

    printf("\n");
}

int main() 
{
    char sentence[100];
    int screenLength;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';  

    printf("Enter the screen length: ");
    scanf("%d", &screenLength);

    justifySentence(sentence, screenLength);

    return 0;
}