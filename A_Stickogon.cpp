#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> sticks(n);
    map<int, int> freq;

    for (int i = 0; i < n; ++i)
    {
        cin >> sticks[i];
        freq[sticks[i]]++;
    }

    int maxPolygons = 0;

    for (auto &it : freq)
    {
        if (it.second >= 3)
            maxPolygons += it.second / 3;
    }

    cout << maxPolygons << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 

    while (t--)
    {
        solve();
    }

    return 0;
}
