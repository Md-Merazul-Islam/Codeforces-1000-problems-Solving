

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}