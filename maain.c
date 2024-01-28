// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int A[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     int x, v; //input the nth number and it's value 
//     scanf("%d %d", &x, &v);

        
//             A[x] = v;
      
//         for (int i = n - 1; i >= 0; i--)
//         {
//             printf("%d ", A[i]);
//         }
    
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {

//         scanf("%d", &a[i]);
//     }

//     if (a[i] % 2 == 0)
//     {
//         printf("%d",a[i]);
//         // for (i = n - 1; i >= 0; i--)
//         // {
//         //     printf("%d ", a[i]);
//         // }
//     }

//     return 0;
// }

#include<stdio.h>  
  
int main()  
{  
    int n;
    scanf("%d",&n);
    long long int  a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lldd",&a[i]);
    }
    for (int i=n-1;i>=0;i--)
    {
        if (i%2==0)
        {
            printf("%lld ",a[i]);
        }
        
    }
  
    return 0;  
}  