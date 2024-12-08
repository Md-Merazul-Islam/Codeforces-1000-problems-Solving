#include <bits/stdc++.h>
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
#define rloop(i, a, b) for (int i = (a); i >= (b); --i)
#define scan(a) loop(i, 1, a.size()) cin >> a[i]
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
void print(vector<ll> &a) { loop(i, 1, a.size()) cout << a[i] << ' '; }

const int N = 2e5 + 5;
void hello_world_solve_here()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int bki = a[i] % k;
        mp[bki].push_back(i + 1);
    }

    for (auto &it : mp)
    {
        if (it.second.size() == 1)
        {
            cout << "YES" << endl;
            cout << it.second[0] << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
