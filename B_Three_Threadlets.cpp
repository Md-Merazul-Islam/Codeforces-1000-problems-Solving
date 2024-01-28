// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         int d = __gcd(a, __gcd(c, b));
//// cout << d << endl;
//         if ((a + b + c) / d - 3 > 3)
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int mx = __gcd(a, __gcd(c, b));
        if (mx>3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}