
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
#define pii pair<ll,ll> 
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define out(x) cout << x << "\n";
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i,0, a.size()) cin >> a[i]
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
const int N = 2e5 +5;

void hello_world_solve_here()
{
    
    ll n;cin>>n;
    vi a(n);
    ll sum =0;
    for (ll i = 0; i < n; ++i){
        cin>>a[i];
        sum += a[i];
    }
    if(sum%n!=0){
        no;return;
    }

    ll target = sum /n;
    ll evenSum =0, oddSum=0;
    ll even=0, odd=0;
    for (ll i=0; i<n; i+=2){
        evenSum+=a[i];
        even++;
    }
    for (ll i=1; i<n; i+=2){
        oddSum+=a[i];
        odd++;
    }

    if(evenSum/even!=target || oddSum/odd!=target)no;
    else yes;
}


signed main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_world_solve_here();
    return 0;
}