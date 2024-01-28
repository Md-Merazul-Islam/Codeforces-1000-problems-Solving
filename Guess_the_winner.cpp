/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
#define ll long long
#define dd double
#define pi pair<int, int>
#define pl pair<ll, ll>
#define f first
#define scd second
#define pb push_back
using namespace std;

#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

string findWinner(int N) {
    if (N % 2 == 0) {
        return "Bob";
    }

    if (N == 1 || isPrime(N)) {
        return "Alice";
    }

    if (N > 2 && isPrime(N - 2)) {
        return "Alice";
    }

    return "Bob";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string winner = findWinner(N);
        cout << winner << endl;
    }

    return 0;
}
