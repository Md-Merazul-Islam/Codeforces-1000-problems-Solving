#include <iostream>
#include <string>

using namespace std;

string will_produce_output(string program) {
    for (char c : program) {
        if (c == 'H' || c == 'Q' || c == '9') {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string program;
    cin >> program;

    // Output
    cout << will_produce_output(program) << endl;

    return 0;
}
