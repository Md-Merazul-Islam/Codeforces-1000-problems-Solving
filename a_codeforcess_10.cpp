#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, d, e, f, l, r, c, s;
    cin >> n >> a >> b >> d >> e >> f;
    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        if (i > 1)
        {
            s += min(e, l - c) * a;
            if (l - c > e)
            {
                s += min(l - c - e, f) * b;
                if (l - c > e + f)
                    s += (l - c - e - f) * d;
            }
        }
        s += (r - l) * a;
        c = r;
    }
    cout << s;
}
