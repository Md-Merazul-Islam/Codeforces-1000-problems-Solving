
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
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
#define stt set<ll>
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;

unordered_map<int, int> udt_frq(ll n, vi &a)
{
    unordered_map<int, int> frq;
   for (int num : a) {
        frq[num]++;
    }
    return frq;
}

stt find_mex(unordered_map<int, int> frq, ll n)
{
    stt s1, s2;
    ll j = 0;
    while (frq[j] >= 2)
    {
        s1.insert(j);
        s2.insert(j);
        j++;
    }
    return s2;
}

bool all_seg(const stt &s2)
{
    return s2.empty();
}

void hello_world_solve_here()
{
    ll n;
    cin >> n;
    vi a(n);
    scan(a);
    unordered_map<int, int> frq = udt_frq(n, a);
    stt s2 = find_mex(frq, n);
    if (frq.find(s2.size()) != frq.end())
    {
        cout << -1 << line;
    }
    else
    {
        ll r = 0;
        stt s1;
        loop(i, 0, n)
        {
            if (s1.find(a[i]) != s1.end())s1.erase(a[i]);
            if (s1.empty())
            {
                r = i + 1;
                break;
            }
        }
        loop(i, r, n)if (s2.find(a[i]) != s2.end())s2.erase(a[i]);
        if (all_seg(s2))
        {
            ll fs = 2, snd=1, tr = r, fr = r+1, fv= n;
            cout<<fs<< line<<snd<<" "<<tr<<line<<fr<<" "<<fv<<line;
        }
        else
            cout << -1 << line;
        
    }
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


// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>

// using namespace std;

// void find_subarrays(int n, vector<int>& a) {
//     unordered_map<int, int> freq;
//     for (int num : a) {
//         freq[num]++;
//     }

//     int j = 0;
//     unordered_set<int> s, ss;

//     while (freq[j] >= 2) {
//         s.insert(j);
//         ss.insert(j);
//         j++;
//     }

//     if (freq[j] > 0) {
//         cout << -1 << endl;
//     } else {
//         int r = 0;
//         for (int i = 0; i < n; ++i) {
//             if (s.find(a[i]) != s.end()) {
//                 s.erase(a[i]);
//             }
//             if (s.empty()) {
//                 r = i + 1;
//                 break;
//             }
//         }

//         for (int i = r; i < n; ++i) {
//             if (ss.find(a[i]) != ss.end()) {
//                 ss.erase(a[i]);
//             }
//         }

//         if (ss.empty()) {
//             cout << 2 << endl;
//             cout << "1 " << r << endl;
//             cout << r + 1 << " " << n << endl;
//         } else {
//             cout << -1 << endl;
//         }
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
//         find_subarrays(n, a);
//     }
//     return 0;
// }


