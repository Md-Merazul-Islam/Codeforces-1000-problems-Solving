
// /**************************************************************
// **               BISMILLAH HIR RAHMAN NIR RAHIM              **
// **                  Author: Md Merazul Islam                 **
// **                         CST, MPI                          **
// **                  Sreepur, Gazipur, Dhaka                  **
// **************************************************************/
// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<ll, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nn "\n"
// #define nl cout << "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
// void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}


// void mdmerazulislam()
// {
//     int n; cin>>n;
//     string s;cin>>s;
//     ll jog=0,biog=0;
//     for (int i=0; i<n; i++)
//     {
//         if(s[i]=='+')jog++;
//         else biog++;
//     }
//     cout<<abs(jog-biog)<<endl;

// }

// int main()
// {
//     fast;
    
    
//         int t;
//         cin >> t;
//         while (t--)mdmerazulislam();
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    string s;
    cin >> s;
    cout << abs(count(s.begin(), s.end(), '+') - count(s.begin(), s.end(), '-')) << endl;
  }

    return 0;
}

