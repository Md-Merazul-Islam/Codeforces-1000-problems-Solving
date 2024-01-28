

#include <stdio.h>

#include <string.h>

int main()
{
    int m1,m2,d,days;
    scanf("%d %d %d ",&m1,&m2,&d);
    days = m1*d /m2;
    printf("%d",days);

    return 0;
}