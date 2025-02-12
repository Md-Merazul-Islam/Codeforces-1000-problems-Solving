

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int dif = x + 1 - y;
        if (dif >= 0 && dif % 9 == 0)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
