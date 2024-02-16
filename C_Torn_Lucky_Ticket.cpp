
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
#define out(x) cout << x << "\n";
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i, 0, a.size()) cin >> a[i]
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;
void hello_world_solve_here()
{

    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    ll ans = 0;
    vector<string> s(n);
    vi sum(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        ll ss = 0;
        for (auto u : s[i])
            ss += u - '0';
        for (int j = 0; j < s[i].length(); j++)
        {
            sum[i] += s[i][j] - '0';
            mp[{sum[i] * 2 - ss, (j + 1) * 2 - s[i].length()}]++;
        }
    }
    for (int i = 0; i < n; i++)
        ans += mp[{sum[i], s[i].length()}] + mp[{-sum[i], -s[i].length()}];
    cout << ans << line;
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