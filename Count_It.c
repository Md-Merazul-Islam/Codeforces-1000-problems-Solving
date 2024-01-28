#include <stdio.h>

int main()
{
    char s[1001];
    fgets(s,sizeof(s),stdin);
    int spaces=0,small=0,capital=0;

    for (int i=0;s[i] != '\0';i++)
    {
        if (s[i]==' ')
        {
            spaces++;
        }
        if (s[i]<='z' && s[i]>='a')
        {
            small++;
        }
        if (s[i]<='Z' && s[i]>='A')
        {
            capital++;
        }

    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",capital,small,spaces);
    return 0;
}