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
void hello_world_solve_here()
{
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << "0" << line;
        return;
    }

    vi a(n);
    scan(a);
    vi ans;
    ll even =0, anss =k;
    for (int i = 0; i < n; i++)
    {
        ll x = a[i];
        if(x%2==0)even++;
        if(x%k==0)anss=0;
        anss= min(anss, k-x%k);
        ll cnt = 0;
        while (k != 0 && x % k != 0)
        {
            x++;
            cnt++;
        }
        ans.push_back(cnt);
    }
    ll rst = *min_element(all(ans));
    if (k == 4)
    {
        if(even>=2)anss =0;
        else if(even== 1)anss =min(anss,(1LL));
        else anss= min(anss,(2LL));
    }
        cout << anss << line;
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
