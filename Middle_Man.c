#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[1001];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[j] <a[i])
            {
                
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    
        if (n%2==0)
        {
            printf("%d %d ",a[(n/2)-1],a[(n/2)]);
        }
        else
        {
            printf("%d",a[(n/2)]);
        }
    
    return 0;
}