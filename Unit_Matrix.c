#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    
    
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j && a[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (a[i][j] != 0 && i != j)
            {
                flag = 0;
                break;
            }
        }
        
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}