#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

vector<int> adj[300005];
int dp_in[300005], dp_out[300005];

void dfs(int u, int p)
{
    dp_in[u] = dp_out[u] = 1;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        dfs(v, u);
        dp_in[u] = 1LL * dp_in[u] * (dp_in[v] + dp_out[v]) % MOD;
        dp_out[u] = 1LL * dp_out[u] * dp_in[v] % MOD;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            adj[i].clear();
            dp_in[i] = dp_out[i] = 0;
        }

        for (int i = 1; i < n; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, -1);

        int ans = (dp_in[1] + dp_out[1]) % MOD;
        if (n == 3)
        {

            cout << ans + 2 << endl;
        }
        else
            cout << ans + 3 << endl;
    }

    return 0;
}
