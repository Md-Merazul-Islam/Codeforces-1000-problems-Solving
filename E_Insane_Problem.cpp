#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        ll count = 0;
        for (ll x = l1; x <= r1; x++) {
            ll y = x; // Start with y = x * k^0
            while (y <= r2) {
                if (y >= l2) {
                    count++; // Count valid pairs
                }
                // Check for overflow in multiplication
                if (y > r2 / k) break;
                y *= k; // Increment power of k
            }
        }

        cout << count << endl;
    }

    return 0;
}
