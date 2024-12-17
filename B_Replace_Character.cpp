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
    int n, mx = 0, mn = 1000000000;
    char tmp;
    string s;
    map<char, int> q;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++)
        q[s[i]]++;
    for (int i = 0; i < s.size(); i++)
    {
        if (mx < q[s[i]])
        {
            mx = q[s[i]];
            tmp = s[i];
        }
        mn = min(mn, q[s[i]]);
    }
    int flat = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (q[s[i]] == mn && flat && tmp != s[i])
            cout << tmp, flat = 0;
        else
            cout << s[i];
    }
    cout << endl;
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
