

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int m, a, b, c;
//         cin >> m >> a >> b >> c;
//         int ans = 0;
//         if (m >= a)
//         {
//             ans += a;
//         }
//         else if (m < a)
//         {
//             ans += m;
//             // cout<<"hi _ "<<ans<<endl;
//         }
//         if (m > 1)
//         {
//             if (m >= b)
//             {
//                 ans += b;
//             }
//             else if (m < b)
//             {
//                 ans += m;
//             }
//         }

//         ans += c;

//         cout << ans << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0;
        int row1 = m - min(a, m);
        int row2 = m - min(b, m);
        int ansC = min(c, row1 + row2);
        ans = ansC + min(a, m) + min(b, m);
      
        cout << ans << endl;
    }

    return 0;
}