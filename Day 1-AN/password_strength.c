#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isLowerCase(char ch) 
{
    return (ch >= 'a' && ch <= 'z');
}

int isUpperCase(char ch) 
{
    return (ch >= 'A' && ch <= 'Z');
}

int isDigit(char ch) 
{
    return (ch >= '0' && ch <= '9');
}

int isSpecialChar(char ch) 
{

    return (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' ||ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' ||ch == '-' || ch == '+');
}

int isStrongPassword(char password[]) 
{
    int length = strlen(password);
    int hasLowerCase = 0, hasUpperCase = 0, hasDigit = 0, hasSpecialChar = 0;

    if (length < 8) 
    {
        return 0;
    }

    for (int i = 0; i < length; i++) 
    {
        if (isLowerCase(password[i]))
        {
            hasLowerCase = 1;
        } 
        else if (isUpperCase(password[i])) 
        {
            hasUpperCase = 1;
        } 
        else if (isDigit(password[i])) 
        {
            hasDigit = 1;
        } 
        else if (isSpecialChar(password[i])) 
        {
            hasSpecialChar = 1;
        }
    }

    return (hasLowerCase && hasUpperCase && hasDigit && hasSpecialChar);
}

int main() {
    char password[50];

    printf("Enter the password: ");
    scanf("%s", password);

    if (isStrongPassword(password)) {
        printf("The password is strong.\n");
    } else {
        printf("The password is Weak.\n");
    }

    return 0;
}
