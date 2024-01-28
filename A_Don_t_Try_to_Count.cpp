#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;

        int cnt = 0;
        int loop = 8;
        bool flag = false;
        while (loop--)
        {
            if (x.find(s) == string::npos)
            {
                cnt++;
                x += x;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
