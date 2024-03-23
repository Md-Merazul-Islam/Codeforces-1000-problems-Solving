#include <iostream>
#include <algorithm>
using namespace std;

long long maxFireworks(long long a, long long b, long long m) {
   return (m/a+1 )+ (m/b+1);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, m;
        cin >> a >> b >> m;
        
        cout << maxFireworks(a, b, m) << endl;
    }
    
    return 0;
}
