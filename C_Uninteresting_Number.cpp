

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isDivisiable(string &s)
{
    ll sum = 0, a_2 = 0, b_2 = 0;
    for (auto c : s)
    {
        a_2 += (c == '2');
        b_2 += (c == '3');
        sum += (c - '0');
    }
    for (ll i = 0; i <= min(a_2, (long long)9); i++)
    {
        for (ll j = 0; j <= min(b_2, (long long)9); j++)
        {
            if ((sum + i * 2 + j * 6) % 9 == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isDivisiable(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
