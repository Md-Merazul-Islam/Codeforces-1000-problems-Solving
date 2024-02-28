
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
#define pb push_back
#define out(x) cout << x << "\n";
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i, 0, a.size()) cin >> a[i]
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;

ll fac(ll &a, ll &l)
{
    ll cnt = 0;
    while (l % a == 0 && l > 0)
    {
        l /= a;
        cnt++;
    }
    return cnt;
}
ll remain(ll orgi, ll div){return orgi / div;}
bool ok(ll &l){ return l > 0;}
void hello_world_solve_here()
{
    ll a, b, l;
    cin >> a >> b >> l;
    ll ans;
    if (a == b)
    {
        cout << fac(a, l) + 1 ;nl;
        return;
    }
    ll left = l, d = 1;
    vi v;
    v.pb(0);
    for (int i = 1; l % a == 0 && ok(l); i++)v.pb(i),l /= a;
    unordered_map <int, int> mp;
    for (auto val : v)
    {
        ll tmp = remain(left, d);
        mp[tmp]++;
        while (tmp % b == 0 && ok(tmp))
        {
            tmp /= b,mp[tmp]++;
        }
        d *= a;
    }
    cout << mp.size();nl;
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
