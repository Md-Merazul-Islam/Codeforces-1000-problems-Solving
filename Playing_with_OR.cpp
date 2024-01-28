#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int ans = 0;
//     int bit = 0;
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         bit |= a[i];
//         if (i >= k - 1)
//         {
//             if (bit % 2 == 1)
//                 ans++;
//             bit ^= a[i - (k - 1)];
//         }
//     }

//     cout << ans << endl;
// }

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    int oddCount = 0; 
    int left = 0;    
    for (int right = 0; right < n; right++)
    {
        if (a[right] % 2 == 1)
            oddCount++;

        if (right - left + 1 >= k)
        {
            if (oddCount % 2 == 1)
                ans++;
            if (a[left] % 2 == 1)
                oddCount--;
            left++;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
