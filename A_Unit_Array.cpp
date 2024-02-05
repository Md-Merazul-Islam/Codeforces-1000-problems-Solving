
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

    int n;
    cin >> n;
    int a[n + 1];
    int b[n + 1];
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
            cnt1++;
        else
            cnt2++;
    }
    int ans = 1e9;
    for (int i = 0; i <= cnt1; i++)
    {
        for (int j = 0; j <= cnt2; j++)
        {
            for (int k = 1; k <= n; k++)
                b[k] = a[k];
            int x = i, y = j;
            int res = 0;
            for (int k = 1; k <= n; k++)
            {
                if (b[k] == -1 && x)
                {
                    x--;
                    b[k] = 1;
                    res++;
                }
            }
            for (int k = 1; k <= n; k++)
            {
                if (b[k] == 1 && y)
                {
                    y--;
                    b[k] = -1;
                    res++;
                }
            }
            int sum = 0;
            int cnt = 0;
            for (int k = 1; k <= n; k++)
            {
                if (b[k] == -1)
                {
                    cnt++;
                }
                sum += b[k];
            }
            if (cnt % 2 == 1)
            {
                cnt--;
                sum += 2;
                res++;
            }
            if (sum >= 0)
                ans = min(ans, res);
        }
    }
    cout << ans << endl;
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