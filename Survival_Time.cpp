/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/


#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int,int>
#define pl pair<ll,ll>
#define f first
#define scd second 
#define pb push_back
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    int tmp = b*5;
    int x = a/tmp;
    cout<<x+c<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}