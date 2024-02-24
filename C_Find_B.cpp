
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

    int n, q;
    cin >> n >> q;
    vector<long long> v(n + 1, 0), px(n + 1, 0), mini(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        px[i] = px[i - 1] + v[i];
        mini[i] = mini[i - 1] + (v[i] == 1 ? 2 : 1);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l == r || mini[r] - mini[l - 1] > px[r] - px[l - 1])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
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