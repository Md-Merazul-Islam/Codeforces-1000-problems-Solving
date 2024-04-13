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

    ll n;
    cin >> n;
    set<int> a = {1, 10, 11, 100, 101, 110, 111, 121, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 1210, 1221, 1331, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 10201, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 11121, 11211, 12100, 12111, 12210, 12221, 12321, 13310, 13431, 14641, 100000};
    if (a.count(n) == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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
