#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

struct Node {
    int left, right, val;
};

int count_trees(const vector<Node>& nodes, int idx, int C) {
    if (idx == -1) return 1; // Base case: an empty subtree is a valid binary search tree

    int count = 0;

    // If the value at the current vertex is known
    if (nodes[idx].val != -1) {
        int left_trees = count_trees(nodes, nodes[idx].left, C);
        int right_trees = count_trees(nodes, nodes[idx].right, C);
        count = 1LL * left_trees * right_trees % MOD;
    } else {
        // If the value at the current vertex is unknown
        for (int val = 1; val <= C; ++val) {
            int left_trees = count_trees(nodes, nodes[idx].left, val - 1);
            int right_trees = count_trees(nodes, nodes[idx].right, C - val);
            count = (count + 1LL * left_trees * right_trees) % MOD;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, C;
        cin >> n >> C;

        vector<Node> nodes(n);
        for (int i = 0; i < n; ++i) {
            cin >> nodes[i].left >> nodes[i].right >> nodes[i].val;
        }

        int total_trees = count_trees(nodes, 0, C);
        cout << total_trees << endl;
    }

    return 0;
}
