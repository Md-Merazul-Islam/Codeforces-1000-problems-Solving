#include <iostream>
#include <vector>

using namespace std;

bool canSortArray(vector<int>& arr, int n) {
    while (n > 0) {
        int m = 1;
        while (2 * m <= n) {
            m *= 2;
        }
        m /= 2;
        for (int i = 0; i < m; i++) {
            int j = n - m + i;
            if (arr[j] < i) {
                return false;
            }
            arr[j] -= i;
        }
        n -= m;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        bool result = canSortArray(arr, n);
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
