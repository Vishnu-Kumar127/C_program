#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char *s, char *t) 
{
    int count[26] = {0}; 

    if (strlen(s)!=strlen(t)) 
    {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) 
    {
        count[s[i]-'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) 
    {
        count[t[i]-'a']--;
    }

    for (int i = 0; i<26; i++) 
    {
        if (count[i] != 0) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    char s[25];
    char t[25];

    printf("Enter First String:");
    scanf("%s",&s);

    printf("Enter Second String:");
    scanf("%s",&t);

    if (isAnagram(s, t)) 
    {
        printf("True\n");
    } 
    else 
    {
        printf("False\n");
    }

    return 0;
}