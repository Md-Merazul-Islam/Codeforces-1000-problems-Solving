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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n / 2; i++)
        {
            sum1 += a[i];
        }
        for (int i = n / 2; i < n; i++)
        {
            sum2 += a[i];
        }
        bool flag = false;
        if ((sum1 % 2 == 0 && sum2 % 2 == 0) || (sum1 % 2 == 1 && sum2 % 2 == 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}