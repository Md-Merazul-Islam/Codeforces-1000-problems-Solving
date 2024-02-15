

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for (int i=0;i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll sum =0;
        for (int i=n-1; i>0; i--){
            sum+=abs(a[i]-a[i-1]);
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}