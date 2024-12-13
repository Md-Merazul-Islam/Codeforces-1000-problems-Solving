

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n >= 102 && n <= 109 || 1010 <= n && 1099 >=n)

            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// x>=102&&x<=109||x>=1010&&x<=1099

// 10^0
// 10^10
// 10^1
// 10^5
// 20^33
// 10^19
// 10^02