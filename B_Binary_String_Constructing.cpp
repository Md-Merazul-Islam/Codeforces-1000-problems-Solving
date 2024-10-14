#include <bits/stdc++.h>
using namespace std;
int p[2], n, k, i;
int main()
{
    cin >> p[0] >> p[1] >> n;
    k = p[1] > p[0];
    for (i = 1; i < n; i++, p[k]--, k ^= 1)
        cout << char(k + '0');
    cout << string(p[k], k + '0') << string(p[!k], !k + '0');
    return 0;
}
