
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
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i, 0, a.size()) cin >> a[i]
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 5e3 + 5;
const int MOD = 998244353;
int n, a[N];
ll dp[N];

void hello_world_solve_here()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a+1, a + n + 1);
    dp[0] = 1;
    ll ans = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
            ans += dp[j] * max((j + a[i] + 1) / 2, a[i]) % MOD;
            s+=a[i];
        for (int j=s; j>=a[i]; j--)
        dp[j]= (dp[j]+dp[j-a[i]])%MOD;
    }
    cout<<ans%MOD<<endl;
}

signed main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        hello_world_solve_here();
    return 0;
}