

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ans(int A, int B)
{
    if (B == 0)
    {
        return -1;
    }
    else
    {
        return A % B;
    }
}

int main()
{
    int A, B;
    cin >> A >> B;
    int result = ans(A, B);
    cout << result << endl;

    return 0;
}
