#include <bits/stdc++.h>

using namespace std;
void fun(int n, char c)
{

    for (int j = 0; j < n; j++)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    int n;
    char c;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        fun(n, c);
    }

    return 0;
}