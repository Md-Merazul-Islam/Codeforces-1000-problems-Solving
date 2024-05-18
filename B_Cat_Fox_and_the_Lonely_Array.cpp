#include <bits/stdc++.h>
using namespace std;

#define int long long
#define bit_or(x, y) (x | y)
#define loop(i, n) for (int i = 0; i < n; i++)
const int MAXN = 100001;
const int LOGMAXN = 20;
int ar[MAXN][LOGMAXN];

int qq(int L, int R)
{
    int sum = 0;
    for (int j = LOGMAXN; j >= 0; j--)
        if ((1 << j) <= R - L + 1)
            sum = bit_or(sum, ar[L][j]), L += 1 << j;

    return sum;
}

void bld(int arr[], int N)
{
    loop(i, N) ar[i][0] = arr[i];

    for (int j = 1; j <= 20; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            ar[i][j] = bit_or(ar[i][j - 1], ar[i + (1 << (j - 1))][j - 1]);
}


signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        loop(i, n) cin >> arr[i];
        bld(arr, n);
        int l = 1, r = n, ans = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2, val = 0;
            loop(i, mid) val = bit_or(val, arr[i]);
            bool f = true;
            for (int i = 1; i < n; i++)
            {
                int l = i, r = i + mid - 1;
                if (r <= n - 1)
                {
                    int cur = qq(l, r);
                    if (cur != val)
                    {
                        f = false;
                        break;
                    }
                }
            }
            if (f)
                ans = min(ans, mid), r = mid - 1;
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
}
