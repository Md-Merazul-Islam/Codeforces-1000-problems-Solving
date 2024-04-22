#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, q;
        cin >> k >> q;
        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }
        vector<int> n(q);
        for (int i = 0; i < q; ++i) {
            cin >> n[i];
        }
        int mn = *min_element(a.begin(), a.end());
        for (int i = 0; i < q; ++i) {
            cout << ((n[i] >= mn) ? mn - 1 : n[i]) << " ";
        }
        cout << endl;
    }

    return 0;
}
