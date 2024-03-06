

#include <bits/stdc++.h>
using namespace std;
#define ll long long


long long count_pairs(vector<ll>& s, ll c) {
    long long ans = (((c + 1) * (c + 2)) / 2);
    long long sum = 0, s_sum = 0;
    for (int num : s) {
        sum += num;
        s_sum += ((num + 2) / 2);
    }
    ans -= s_sum;
    ans -= (((c + 1) * s.size()) - sum);

    int e = 0, o = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] % 2) {
            o++;
            ans += o;
        } else {
            e++;
            ans += e;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n, c;
        cin >> n >> c;
        vector<ll> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        cout << count_pairs(s, c) << endl;
    }
    return 0;
}
