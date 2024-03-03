#include <iostream>
#include <string>

using namespace std;

int main() {
    string remix;
    cin >> remix;

    string original;
    for (int i = 0; i < remix.size(); ++i) {
        if (remix[i] == 'W' && remix[i + 1] == 'U' && remix[i + 2] == 'B') {
            i += 2;
            if (!original.empty() && original.back() != ' ') {
                original += ' '; 
            }
        } else {
            original += remix[i];
        }
    }

    cout << original << endl;

    return 0;
}
