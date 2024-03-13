#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;
    int mx = max(Y, W);
    
    int fv = 6 - mx + 1;
    
    int ans = 6;
    int gcd = __gcd(fv, ans);
    
    fv /= gcd;
    ans /= gcd;
    
    cout << fv << "/" << ans << endl;

    return 0;
}
