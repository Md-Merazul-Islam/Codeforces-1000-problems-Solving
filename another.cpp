#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long t, n, k, g;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> g;
        cout << min((g - 1) / 2 * n / g, k) * g << endl;
    }
}