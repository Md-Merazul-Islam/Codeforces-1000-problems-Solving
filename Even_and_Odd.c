#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    int sum = 0;
    int sum2=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            
            sum = sum + v[i];
        }
        else if ( v[i]%2==1)
        {
            
            sum2=sum2+v[i];
        }
    }
    printf("%d %d",sum, sum2);
    return 0;
}