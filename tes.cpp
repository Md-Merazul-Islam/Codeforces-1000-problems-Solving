

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
        vector<int> c(100);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            c[a]++;
        }
        cout << (is_sorted(c.begin(), c.end(), greater<>()) ? "YES" : "NO") << endl;
    }
    return 0;
}