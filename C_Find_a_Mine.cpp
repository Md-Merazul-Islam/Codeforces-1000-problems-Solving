#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> queries;
        vector<vector<int>> distances(n, vector<int>(m, 0));

        // Make at most 4 queries
        for (int i = 1; i <= min(n, 2); ++i) {
            for (int j = 1; j <= min(m, 2); ++j) {
                cout << "? " << i << " " << j << endl;
                fflush(stdout);

                int d;
                cin >> d;
                queries.push_back({i, j});
                distances[i - 1][j - 1] = d;
            }
        }

        // Find the mine based on the distances calculated
        int mine_x, mine_y;
        if (distances[0][1] == distances[1][0]) {
            // The mines are diagonal to each other
            mine_x = 1;
            mine_y = 1;
        } else if (distances[0][1] < distances[1][0]) {
            // The mine is closer to the top left corner
            mine_x = queries[0].first;
            mine_y = queries[0].second;
        } else {
            // The mine is closer to the bottom right corner
            mine_x = queries[1].first;
            mine_y = queries[1].second;
        }

        // Output the mine location
        cout << "! " << mine_x << " " << mine_y << endl;
        fflush(stdout);
        
    }

    return 0;
}
