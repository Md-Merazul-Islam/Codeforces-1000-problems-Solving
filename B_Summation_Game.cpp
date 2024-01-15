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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void mdmerazulislam()
{
    ll n, k, k1;
    cin >> n >> k >> k1;
    vi a(n);
    loop(i, 0, n) cin >> a[i];
    srt(a);
    ll s = 0, mx = 0, cnt = n-k1;
    loop(i,0,n)
    {
        if (i < cnt)
            s += a[i];
        else
            s -= a[i];
    }

    ll rst = s;
    for (int i = n - 1; i >= n - k; i--)
    {
        if (i >= cnt)
        {
            s += a[i];
            if (cnt - 1 >= 0)
                s -= 2 * a[cnt - 1];
            cnt--;
            rst = max(s, rst);
        }
    }
    cout << rst << endl;

    
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}
