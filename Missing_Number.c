#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c,d,s;

    for ( int i=0;i<t;i++)
    {
        scanf("%d %d %d %d ",&a ,&b,&c,&d);
        s=b+c+d;
        int ans;
        ans = a-s;
        printf("%d\n",ans);
    }
    return 0;
}