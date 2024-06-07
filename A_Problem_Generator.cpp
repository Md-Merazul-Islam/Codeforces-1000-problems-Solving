#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, q;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v(7, 0);
        for (int i = 0; i < n; i++)
        {
            v[(int)s[i] - 65]++;
        }
        q = 0;
        for (int i = 0; i < 7; i++)
        {
            if (v[i] < m)
            {
                q = q + m - v[i];
            }
        }
        cout << q << endl;
    }
}