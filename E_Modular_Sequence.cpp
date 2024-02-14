
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<ll, ll>>
#define pii pair<ll, ll>
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i, 0, a.size()) cin >> a[i]
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 7;
const int inf = 0x3f3f3f3f;
int T, n, s, x, y;
int a[N], dp[N];
void cal(int l, int r, int sum)
{
    while (l <= r)
    {
        for (int j = 1; j <= 1e3; j++)
        {
            ll v = sum - 1ll * j * (j - 1) / 2 * y;
            int nxt = l + j;
            if (dp[v] <= r - nxt + 1)
            {
                for (int k = l; k < nxt; k++)
                {
                    a[k] = x + (k - l) * y;
                }
                l = nxt;
                sum = v;
                break;
            }
        }
    }
}

void hello_world_solve_here()
{
    cin >> n >> x >> y >> s;
    for (int i = 1; i <= s; i++)
        dp[i] = inf;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 2; j <= 1e3; j++)
        {
            ll k = 1ll * j * (j - 1) / 2 * y + i;
            if (k > s)
                break;
            dp[k] = min(dp[k], dp[i] + j);
        }
    }
    a[0] = x - y;
    x %= y;
    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + y;
        s -= a[i];
        if (s < 0)
            break;
        ll sum = s - 1ll * (n - i) * x;
        if (sum < 0 || sum % y || dp[sum] > n - i)
            continue;
        cal(i + 1, n, sum);
        yes;
        for (int j = 1; j <= n; j++)
            cout << a[j] << " ";
        cout << "\n";
        return;
    }
    no;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        hello_world_solve_here();
    return 0;
}
