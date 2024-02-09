
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
#define pii pair<ll,ll> 
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
#define scan(a) loop(i,0, a.size()) cin >> a[i]
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 +5;
void hello_world_solve_here()
{
    
    ll n,k,s,t;
    cin>>n>>k>>s>>t;
    vi x(n+1),y(n+1);
    for(int i=1; i<=n; i++)cin>>x[i]>>y[i];
    ll ans = abs(x[s]-x[t])+abs(y[s]-y[t]);
    ll mn_A = LLONG_MAX/2,mn_B = LLONG_MAX/2;
    for(int i=1; i<=k; i++)
    {
        mn_A=min(mn_A, abs(x[s]-x[i])+abs(y[s]-y[i]));
        mn_B= min(mn_B,abs(x[t]-x[i])+abs(y[t]-y[i]));
    }
    ans = min(ans,(mn_A+mn_B));
    cout<<ans<<line;
}


signed main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_world_solve_here();
    return 0;
}