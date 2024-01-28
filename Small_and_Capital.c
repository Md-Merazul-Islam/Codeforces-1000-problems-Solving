#include <stdio.h>

#include <string.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    int capital=0,small=0;
    for (int i=0;i<strlen(s);i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            capital++;
        }
        if (s[i]>='A' && s[i]<='Z')
        {
            small++;
        }
    }   
    printf("%d %d",small,capital);
    return 0;
}