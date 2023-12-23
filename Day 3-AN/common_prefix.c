#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char** strs, int strsSize, char* result) 
{
    if (strsSize == 0) 
    {
        result[0] = '\0';
        return;
    }

    int i, j;
    for (i = 0; strs[0][i] != '\0'; i++) 
    {
        for (j = 1; j < strsSize; j++) 
        {
            if (strs[j][i] != strs[0][i] || strs[j][i] == '\0') 
            {
                break;
            }
        }

        if (j < strsSize) 
        {
            break;
        }
    }

    strncpy(result, strs[0], i);
    result[i] = '\0';
}

int main() 
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char result[100]; 
    char* strs[n];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d : ",(i+1));
        strs[i] = (char*)malloc(100); 
        scanf("%s", strs[i]);
    }
    longestCommonPrefix(strs, n, result);

    printf("Longest Common Prefix: %s\n", result);
    for (int i = 0; i < n; i++) 
    {
        free(strs[i]);
    }
    return 0;
}