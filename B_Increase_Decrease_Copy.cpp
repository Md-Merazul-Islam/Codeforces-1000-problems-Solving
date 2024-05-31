#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results(t);
    
    for (int k = 0; k < t; ++k) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        vector<int> b(n + 1);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n + 1; ++i) {
            cin >> b[i];
        }
        
        // Calculate the prefix sums
        vector<long long> prefix_a(n + 1, 0);
        vector<long long> prefix_b(n + 2, 0);
        
        for (int i = 0; i < n; ++i) {
            prefix_a[i + 1] = prefix_a[i] + a[i];
        }
        
        for (int i = 0; i < n + 1; ++i) {
            prefix_b[i + 1] = prefix_b[i] + b[i];
        }
        
        // Calculate the total number of operations needed
        long long total_operations = 0;
        for (int i = 1; i <= n; ++i) {
            total_operations += abs(prefix_a[i] - prefix_b[i]);
        }
        
        // Consider the last element of b which has no counterpart in prefix_a
        total_operations += abs(prefix_a[n] - prefix_b[n + 1]);
        
        results[k] = total_operations;
    }
    
    for (int res : results) {
        cout << res << endl;
    }
    
    return 0;
}
