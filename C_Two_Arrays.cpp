/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define fori(i, a, b) for (int i = (a); i < (b); ++i)
#define repi(i, a, b) for (int i = (a); i <= (b); ++i)
#define srt (v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void mdmerazulislam()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    fori(i, 0, n) cin >> a[i];
    fori(i, 0, n) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool ok = true;
    int k = abs(a[0]-b[0]);
    for (int i = 0; i <n; i++)
    {

        if (b[i]-a[i] >1 || a[i]>b[i])
        {
            ok = false;
            break;
        }
    }
    if(ok)yes;else no;
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