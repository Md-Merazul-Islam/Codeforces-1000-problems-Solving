#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; // Length of the array
        cin >> n;

        vector<int> a(n);
        long long sum = 0; // To store the sum of elements

        // Input the array and calculate the sum
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }

        // Check if the sum is divisible by n
        if (sum % n != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            // Check if redistribution can work
            bool possible = true;
            long long target = sum / n;
            long long balance = 0;

            // Traverse through the array to check if we can balance the elements
            for (int i = 0; i < n; ++i)
            {
                balance += a[i] - target;
                if (balance < 0)
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
