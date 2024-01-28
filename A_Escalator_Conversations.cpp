// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m, k, h;
//         cin >> n >> m >> k >> h;
//         int say = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             if (abs(x - h) % k == 0 && abs(x - h) / k < m && x != h)
//             {
//                 say++;
//             }
//         }
//         cout << say << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     int a[n];
//     for (int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]<=10 )
//         {
//             cout<<"A["<<i<<"]"<<" = "<<a[i]<<endl;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] <= 10)
        {
            printf("A[%d] = %d\n", i, A[i]);
        }
        else
        {
            continue;
        }
    }

    return 0;
}
