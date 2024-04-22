#include <iostream>
#include <vector>
#define ll long long
#define nl '\n'
using namespace std;

// Function to calculate the sum
ll calculateSum(int n) {
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i * 2 - 1) * i;
    }
    return sum;
}

// Function to print operations of type 1
void printType1(int n) {
    for (int i = 1; i <= n; i++) {
        cout << 1 << " " << i << " ";
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << nl;
    }
}

// Function to print operations of type 2
void printType2(int n) {
    for (int i = 1; i < n; i++) {
        cout << 2 << " " << i << " ";
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << nl;
    }
}

// Function to handle special case when n > 2
void printSpecial(int n) {
    if (n > 2) {
        cout << 1 << " " << 1 << " ";
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << nl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        ll sum = calculateSum(n);
        int op = n + n - 1;
        if (n > 2) op++;

        cout << sum << " " << op << nl;

        printType1(n);
        printType2(n);
        printSpecial(n);
    }
    return 0;
}
