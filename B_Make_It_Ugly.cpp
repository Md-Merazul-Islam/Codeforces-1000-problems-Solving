#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define M_PI 3.14159265359
#define MIN_DIFF 1e-9
#define DOUBLE double
#define LL long long
#define PRINT_YES cout << "YES\n"
#define PRINT_NO cout << "NO\n"
#define PUSH_BACK pb
#define VECTOR vector<LL>
#define PAIR_VECTOR vector<pair<LL, LL>>
#define PAIR_INT pair<LL, LL>
#define SORT(a) sort(a.begin(), a.end())
#define ALL(a) a.begin(), a.end()
#define REVERSE_SORT(a) sort(a.rbegin(), a.rend())
#define NEW_LINE "\n"
#define PRINT(x) cout << x << "\n";
#define LOOP(i, a, b) for (int i = (a); i < (b); ++i)
#define REPEAT_LOOP(i, a, b) for (int i = (a); i <= (b); ++i)
#define INPUT(a) LOOP(i, 0, a.size()) cin >> a[i]
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL);

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

pair<VECTOR, map<int, int>> read_input_data() {
    int n;
    cin >> n;
    VECTOR a(n);
    map<int, int> mp;
    LOOP(i, 0, n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    return {a, mp};
}

int solve_problem(const VECTOR& a, const map<int, int>& mp) {
    if (mp.size() <= 1) {
        return -1;
    }

    int tmp = a[0], cnt = 0, ans = a.size();
    LOOP(i, 0, a.size()) {
        if (a[i] == tmp)
            cnt++;
        else {
            ans = min(ans, cnt);
            cnt = 0;
        }
    }
    ans = min(ans, cnt);
    return ans;
}

void print_result(int result) {
    cout << result << endl;
}

int main() {
    FAST;
    int t = 1;
    cin >> t;
    while (t--) {
        auto [a, mp] = read_input_data();
        int result = solve_problem(a, mp);
        print_result(result);
    }
    return 0;
}