#include <iostream>

using namespace std;

long long fact(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        long long combinations = fact(N) / (2 * fact(N - 2));

        cout << combinations*2 << endl;
    }

    return 0;
}
