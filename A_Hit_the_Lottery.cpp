

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;cin>>n;
    vector<ll>dp((n+1),LLONG_MAX); // Make dp 
    vector<ll>demo={1,5,10,20,100};
    dp[0]=0; 
    
    for (auto d : demo)
    {
        for (ll i=d; i<=n;i++ ){
            if(dp[i-d]!=LLONG_MAX){
                dp[i]= min(dp[i], dp[i-d]+1);
            }
        }
    }
    cout<<dp[n];
    return 0;
}




