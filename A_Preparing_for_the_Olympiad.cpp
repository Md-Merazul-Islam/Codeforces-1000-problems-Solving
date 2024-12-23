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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int m = 0, s = 0;
        
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > b[i + 1])
            {
                m += a[i];
                s += b[i + 1];
            }
        }
        m += a[n - 1];

        cout << m - s << endl;
    }

    return 0;
}
