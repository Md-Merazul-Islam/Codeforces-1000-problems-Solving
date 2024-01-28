#include <stdio.h>

#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[1001];
    for (int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    int odd=0,even=0;  
    for (int i=0;i<n;i++)
    {
        if ( a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    } 
    printf("%d %d ",even,odd);
    return 0;
}