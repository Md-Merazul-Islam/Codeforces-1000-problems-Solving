#include <bits/stdc++.h>

using namespace std;
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
        {
            cin >> a[i];
        }
        int mn = *min_element(a.begin(), a.end());
        int ans = 0;
        for (int i = 0.; i < n; i++)
        {
            ans += abs(a[i] - mn);
        }
        cout << ans << endl;
    }
    return 0;
}
