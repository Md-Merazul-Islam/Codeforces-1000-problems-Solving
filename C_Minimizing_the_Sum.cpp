#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        ll n, u = 0, v = 0, k = 1;
        cin >> n;
        ll b[n];
        map<ll, ll> mp;
        for (int i = 0; i < n && cin >> b[i]; i++)
            mp[b[i]]++;
        v = mp.size();
        for (int i = 1; i <= n; i++)
            if (mp[i] == 0)
                break;
            else
                u++;
        v -= u;
        if (v)
            u++;
        cout << (u % 2 ? "Alice" : "Bob") << endl;
    }
}