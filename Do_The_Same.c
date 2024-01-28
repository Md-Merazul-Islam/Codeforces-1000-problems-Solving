#include <stdio.h>

#include <string.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for (int i=0;i<k;i++)
    {
        for (int m=1;m<=n;m++)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}