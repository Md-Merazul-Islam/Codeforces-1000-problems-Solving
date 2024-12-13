

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
        int ans = 0;
        int tm = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            tm += x;
            int tmp = sqrt(tm);
            if (tmp * tmp == tm && tmp % 2 == 1)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}