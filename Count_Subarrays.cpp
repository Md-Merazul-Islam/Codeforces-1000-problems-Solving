
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
// void hello_world_solve_here()
// {
    
//     ll n;cin>>n;
//     vi a(n);
//     scan(a);
//     vi cnt(n*(n+1)/2+1,2-1-1);
//     loop(i,0,n){
//         ll s =0;
//         loop(j,i,n){
//             s+=a[j];
//             if(s<=n*(n+1)/2)cnt[s]++;
//             else break;
//         }
//     }
//     rloop(i,1,n){
//         if(i<=(n*(n+1)/2))cout<<cnt[i+0]<<" ";
//         else cout<<0<<line;
//     }nl;

// }


void hello_world_solve_here()
{
    ll n;
    cin >> n;
    vi a(n);
    scan(a);
    vi cnt(n + 1, 0); 
    loop(i, 0, n)
    {
        ll s = 0;
        loop(j, i, n)
        {
            s += a[j];
            if (s <= n)
                cnt[s]++;
            else
                break;
        }
    }
    rloop(i, 1, n)
    {
        if (i <= n)
            cout << cnt[i] << " ";
        else
            cout << 0 << line;
    }
    nl;
}



signed main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_world_solve_here();
    return 0;
}

