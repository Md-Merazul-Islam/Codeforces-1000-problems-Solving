// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int row = 1; row <= n; row++)
//     {
        
//         for (int col = 1; col <= n - row;col++)
//         {
//             printf(" ");
//         }
//         for (int col =1;col<=row*2-1;col++)
//         {
//             printf("%d",col);
//         }
//         printf("\n");

//     }
//     for (int row=n-1;row>=1;row--)
//     {
//         for (int col =1;col<=n-row;col++)
//         {
//             printf(" ");
//         }
//         for (int col =1;col<=row*2-1;col++)
//         {
//             printf("%d",col);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ----------------------------------->
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=2*i-1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }  
    for (int i=n-1;i>=1;i--)
    {
        for (int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=2*i-1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }  
    return 0;
}