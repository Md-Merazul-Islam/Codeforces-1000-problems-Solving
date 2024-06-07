#include <bits/stdc++.h>
using namespace std;
#define ll long long

void backtrack(vector<string>& result, string cur, int l, int r, int mx) {
    if (cur.length() == mx * 2) {
        result.push_back(cur);
        return;
    }
    if (l < mx) {
        backtrack(result, cur + '(', l + 1, r, mx);
    }
    if (r < l) {
        backtrack(result, cur + ')', l, r + 1, mx);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    backtrack(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> result = generateParenthesis(n);

    for (auto val : result) {
        cout << val << ",";
    }
    return 0;
}
