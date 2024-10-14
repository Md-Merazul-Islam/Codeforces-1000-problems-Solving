#include <bits/stdc++.h>

using namespace std;

int a, p, b[105];
int main()
{
    cin >> a;
    while (cin >> a)
        p = max(p, ++b[a]);
    cout << p;
}