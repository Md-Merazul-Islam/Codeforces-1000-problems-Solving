/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define pq priority_queue
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define in insert
#define vpi vector<pair<int,int>>
#define fori for(int i=0;i<n;i++)
#define srt v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define nl "\n"
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);


void mdmerazulislam()
{
    int n,k;cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a.begin(),a.end());
    bool ok = true;
    for(int i=0; i<n;i++)
    {
        if(a[i]!=b[i] && i<k && (n-i)<=k)
        {
            ok = false;break;
        }
    }
    if(ok)yes;else no;
}

int main()
{
    fast;
    
    int t; cin>>t;
    while(t--)mdmerazulislam();
    
    return 0;
}