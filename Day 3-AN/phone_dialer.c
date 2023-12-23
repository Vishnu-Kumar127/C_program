#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* getLetters(char digit) 
{
    switch (digit) 
    {
        case '2': return "abc";
        case '3': return "def";
        case '4': return "ghi";
        case '5': return "jkl";
        case '6': return "mno";
        case '7': return "pqrs";
        case '8': return "tuv";
        case '9': return "wxyz";
        default: return "";
    }
}

void generateCombinations(char* digits, int index, char* current, char** result, int* count) 
{
    if (digits[index] == '\0') 
    {
        result[*count] = strdup(current);
        (*count)++;
        return;
    }

    const char* letters = getLetters(digits[index]);

    for (int i = 0; letters[i] != '\0'; i++) 
    {
        current[index] = letters[i];
        generateCombinations(digits, index + 1, current, result, count);
    }
}

char** letterCombinations(char* digits, int* returnSize) 
{
    int n = strlen(digits);
    if (n == 0) 
    {
        *returnSize = 0;
        return NULL;
    }

    int maxSize = 1;
    for (int i = 0; i < n; i++) 
    {
        maxSize *= 4;
    }

    char** result = (char**)malloc(maxSize * sizeof(char*));
    *returnSize = 0;

    char* current = (char*)malloc((n + 1) * sizeof(char));
    current[n] = '\0';

    generateCombinations(digits, 0, current, result, returnSize);

    free(current);

    return result;
}

int main() 
{
    char digits[100]; 
    printf("Enter the digits (2-9 inclusive): ");
    scanf("%s", digits);

    int size;
    char** result = letterCombinations(digits, &size);

    printf("Output: [");
    for (int i = 0; i < size; i++) 
    {
        printf("\"%s\"", result[i]);
        if (i < size - 1) 
        {
            printf(", ");
        }
        free(result[i]);
    }
    printf("]\n");
    free(result);

    return 0;
}