#include <stdio.h>
#include <string.h>
int palindrome(char str[])
{
    int len, j;
    len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0; // if not palindrome
        }
    }

    return 1; // if is palindrome
}
int main()
{
    char str[11];
    scanf("%s", &str);
    if (palindrome(str))
    {
        printf("Palindrome\n");
    }
    else

    {
        printf("Not Palindrome\n");
    }

    return 0;
}