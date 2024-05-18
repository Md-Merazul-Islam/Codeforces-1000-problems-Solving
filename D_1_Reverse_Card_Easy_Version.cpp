#include <iostream>

using namespace std;

int main() {
    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases > 0) {
        int n_value, m_value;
        cin >> n_value >> m_value;

        int result = n_value;
        for (int i = 2; i < m_value +1; i++) {
            int x = (n_value + i) / i;  // Integer division
            result += x;
        }

        cout << result << endl;
        num_test_cases--;
    }

    return 0;
}