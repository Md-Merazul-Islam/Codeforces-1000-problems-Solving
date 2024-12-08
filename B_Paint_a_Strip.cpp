#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long k = 1, i = 1;
        while (k < n)
        {
            k = 2 * (1 + k);
            i++;
        }
        cout << i << endl;
    }
    return 0;
}


