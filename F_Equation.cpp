#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long x, n;
    cin >> x >> n;
    double sum = 0;
    for (int i = 2; i < n; i += 2)
    {
        sum += pow(x * 1.0, i * 1.0);
    }

    cout << (long long)sum;
    return 0;
}
