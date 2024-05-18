

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<int> grpr(int n)
{
    vector<int> prim;
    int num = 2;
    while (prim.size() < n)
    {
        if (isPrime(num))
        {
            prim.push_back(num);
        }
        ++num;
    }
    return prim;
}

int main()
{
    int N;
    cin >> N;

    int tot = N * N;
    vector<int> prim = grpr(tot);

    vector<vector<int>> pt(N, vector<int>(N));
    int index = 0;

    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        {

            for (int j = 0; j < N; ++j)

                pt[i][j] = prim[index++];
        }
        else
        {

            for (int j = N - 1; j >= 0; --j)
                pt[i][j] = prim[index++];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << pt[i][j];
            if (j < N - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
