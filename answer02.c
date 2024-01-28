// #include <stdio.h>

// int main()
// {
//     int n, row,col;
//     scanf("%d",&n);
//     for (row=1;row<=n;row++)
//     {
//         for (col=1;col<=n-row;col++)
//         {
//             printf(" ");
//         }
//         for (col=1;col<=row;col++)
//         {
//             printf("%d",row);
//         }
//         printf("\n");
//     }   
//     return 0;
// }
// ------------------------------->
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }    
    return 0;
}