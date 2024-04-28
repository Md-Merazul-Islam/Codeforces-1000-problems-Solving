#include <iostream>
#include <vector>

using namespace std;

bool is_possible(vector<vector<char>> &grid, int n, int m)
{
    char color = grid[0][0];
    int ww = 0, bb = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == 'W')
            {
                ww++;
            }
            else
                bb++;
        }
    }
 
    if (ww == bb)
        return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> grid[i][j];
            }
        }

        if ( n==1 || m==1|| is_possible(grid, n, m))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
