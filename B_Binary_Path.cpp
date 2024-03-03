#include <bits/stdc++.h>
using namespace std;

#define line "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    long long cnt =0, j=n-1;
    for (int i=1; i<n; i++){
        if(a[i]!=b[i-1]){
            if (a[i]=='0')cnt=0;
            else {j=i-1; break;}
        }
        else cnt++;
    }
    for (int i=0; i<=j; i++)cout<<a[i];
    for(int i=j; i<n; i++)cout<<b[i];
    cout<<endl<<cnt+1<<endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
