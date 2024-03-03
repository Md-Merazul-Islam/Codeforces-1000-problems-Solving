
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
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define rsrt(v) sort(v.rbegin(), v.rend())
#define line "\n"
#define nl cout << "\n"
#define out(x) cout << x << "\n";
#define loop(i, v, b) for (int i = (v); i < (b); ++i)
#define rloop(i, v, b) for (int i = (v); i <= (b); ++i)
#define scan(v) loop(i,0, v.size()) cin >> v[i]
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
void print (vector<ll>&v) {loop(i,0,v.size())cout<<v[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 +5;
void hello_world_solve_here()
{
    
    ll n;cin>>n;
    vi v(n);scan(v);
    srt(v);
   ll i = 0, j = n - 1, l = n - 2, k = 1;
    cout <<abs(v[k] - v[l])+ abs(v[i] - v[j]) + abs(v[j] - v[k])  + abs(v[l] - v[i]) << line;
    
}


signed main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_world_solve_here();
    return 0;
}