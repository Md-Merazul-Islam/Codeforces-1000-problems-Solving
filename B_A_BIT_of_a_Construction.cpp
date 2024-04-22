#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int lg = (1 << (31 - __builtin_clz(k))) - 1;

        int sum = k - lg;

        cout << lg << " ";
        for (int i = 1; i < n; ++i) {
            if (sum > 0) {
                cout << "1 ";
                sum--;
            } else {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}
