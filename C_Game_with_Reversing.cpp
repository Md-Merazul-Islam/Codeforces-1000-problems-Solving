
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
const int N = 2e5 + 5;

ll diff(string &a, string &b)
{
    ll dif = 0;
    ll n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            dif++;
    }
    return dif;
}
void hello_world_solve_here()
{

    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    ll difbe = diff(a, b);
    ll ans = (2LL) * (difbe);
    if (difbe & 1)
        ans--;
    string tmp = b;
    reverse(all(tmp));
    ll defaf = diff(a, tmp);
    if (defaf == 0)
    {
        ans = min(ans, (2LL));
    }
    else if (defaf % 2 == 0)
    {
        ans = min(ans, 2LL * defaf - 1LL);
    }
    else
    {
        ans = min(ans, 2 * defaf);
    }
    cout << ans << line;
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