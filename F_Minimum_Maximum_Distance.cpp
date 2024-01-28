#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
int level[N]={0};
vector<bool> visited(N, false);
vector<int> marked;

void bfs(int st, int end)
{
    queue<int> q;
    q.push(st);
    visited[st] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (u == end)
        {
            break;
        }

        for (int v : adj[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        marked.clear();

        for (int i = 0; i < k; ++i)
        {
            int mark;
            cin >> mark;
            marked.push_back(mark);
        }

        for (int i = 1; i < n; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int ans = INT_MAX;

          for (int mark : marked)
        {
            bfs(mark, n);
            if (level[n] > 0)
            {
                ans = min(ans, level[n]);
            }
        }

        cout << ans << endl;

      
    }
    return 0;
}
