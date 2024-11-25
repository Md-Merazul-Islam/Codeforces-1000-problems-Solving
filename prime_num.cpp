#include <bits/stdc++.h>
using namespace std;
int main()
{

    int lower, upper;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;

    for (int i = lower; i < upper; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}


