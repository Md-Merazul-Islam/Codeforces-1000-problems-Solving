

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        reverse(s.begin(), s.end());

        for (auto &c : s)
        {
            if (c == 'p')
            {
                c = 'q';
            }
            else if (c == 'q')
            {
                c = 'p';
            }
        }
        cout << s << endl;
    }

    return 0;
}