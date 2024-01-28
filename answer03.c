#include <stdio.h>
int count_before_zero(int n,int ar[])
{
    int cnt =0;
    for (int i=0;i<n;i++)
    {
        if (ar[i]==0)
        {
            break;
        }
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }  
    int cnt;
    cnt = count_before_zero(n,ar);
    printf("%d",cnt);
    return 0;
}