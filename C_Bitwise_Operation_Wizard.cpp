#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> calculatePinballTime(int n, string s) {
    vector<int> answer(n);
    for (int i = 0; i < n; i++) {
        string grid = s;
        int seconds = 0;
        int pos = i;
        while (pos >= 0 && pos < n) {
            if (grid[pos] == '>') {
                grid[pos] = '<';
                pos++;
            } else {
                grid[pos] = '>';
                pos--;
            }
            seconds++;
        }
        answer[i] = seconds;
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> answer = calculatePinballTime(n, s);
        for (int i = 0; i < n; i++) {
            cout << answer[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
