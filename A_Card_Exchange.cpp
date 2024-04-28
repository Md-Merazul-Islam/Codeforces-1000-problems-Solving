#include <bits/stdc++.h>
using namespace std;
#define ll long long


int min_op(int n, int k, vector<int>& cards) {
    map<int, int> count;
    for (int card : cards) {
        count[card]++;
    }
    int i =0, ans = 0;
    vector<int>v;
    for (auto val: count){
        v.push_back(val.second);
    }
    sort(v.begin(),v.end());
    for( i=v.size()-1; i>=0; i--){
        if(v[i]>=k){
            v[i]=0;
            if(i-1>=0)v[i-1]+=k-1;
            else if (i==0)ans =k-1;
        }
        else break;
    }
    while(i>=0){ans+=v[i]; i--;}
    return ans;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cards(n);
        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }
        cout << min_op(n, k, cards) << endl;
    }

    return 0;
}
