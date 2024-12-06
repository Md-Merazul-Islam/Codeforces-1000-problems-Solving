#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Precompute the transformations
int square_transform[10] = {0, 0, 4, 6, -3, 0, 0, 2, -4, 0};

bool can_divide_by_9(const string& num) {
    int digit_sum = 0;

    // Calculate the initial digit sum
    for (char c : num) {
        digit_sum += (c - '0');
    }

    // Check if the current digit sum is already divisible by 9
    if (digit_sum % 9 == 0) return true;

    // Try transformations
    for (char c : num) {
        int original_digit = c - '0';
        int transformed_digit = square_transform[original_digit];

        // Calculate the new sum if we transform this digit
        int new_digit_sum = digit_sum + (transformed_digit - original_digit);

        // Check if the new sum is divisible by 9
        if (new_digit_sum % 9 == 0) return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        if (can_divide_by_9(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
