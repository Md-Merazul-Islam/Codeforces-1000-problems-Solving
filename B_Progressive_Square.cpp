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
void print(vector<int> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;

bool hello_world_solve_here()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n * n);
    scan(a);
    int a11 = *min_element(all(a));
    vector<vector<int>> grid(n, vector<int>(n, 0));
    grid[0][0] = a11;
    for (int j = 1; j < n; ++j)
    {
        grid[0][j] = grid[0][j - 1] + c;
    }
    for (int i = 1; i < n; ++i)
    {
        grid[i][0] = grid[i - 1][0] + d;
        for (int j = 1; j < n; ++j)
        {
            grid[i][j] = grid[i][j - 1] + c;
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            // cout << grid[i][j] << " ";
            ans.push_back(grid[i][j]);
        }
    }

    srt(a);
    srt(ans);

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != ans[i])
            return false;
    }
    return true;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (hello_world_solve_here())
            yes;
        else
            no;
    }
    return 0;
}
