
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
    ll x, y;
    cin >> x >> y;
    vector<pii> v;
    for (int i = 1; i <= x; i++)
    {
        string s;
        cin >> s;

        for (int j = 1; j <= y; j++)
        {
            if (s[j - 1] == '#')
            {
                v.pb({i, j});
            }
        }
    }

    int n = v.size();
    vi xs, ys;
    for (const auto &ptr : v)
    {
        xs.pb(ptr.first);
        ys.pb(ptr.second);
    }
    srt(xs);
    srt(ys);
    ll m_x = xs[n / 2], m_y = ys[n / 2];

    cout << m_x << " " << m_y << endl;
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