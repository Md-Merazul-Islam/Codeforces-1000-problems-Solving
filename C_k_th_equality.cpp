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
#define out(x) cout << x << "\n";
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i >= (b); --i)
#define scan(a) loop(i, 1, a.size()) cin >> a[i]
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
void print(vector<ll> &a) { loop(i, 1, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;
int T, a, b, c, k;
void hello_world_solve_here()
{
    cin >> a >> b >> c >> k;
    bool flag = 0;
    for (int i = pow(10, a - 1); i < pow(10, a); i++)
    {
        int minn = max(pow(10, b - 1), pow(10, c - 1) - i), maxn = min(pow(10, b) - 1, pow(10, c) - 1 - i);
        if (minn > maxn)
            continue;
        int cur = maxn - minn + 1;
        if (k <= cur)
        {
            cout << i << " + " << minn + k - 1 << " = " << i + minn + k - 1 << "\n";
            flag = true;
            break;
        }
        k -= cur;
    }
    if (!flag)
        cout << "-1\n";
}
signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        hello_world_solve_here();
    return 0;
}
