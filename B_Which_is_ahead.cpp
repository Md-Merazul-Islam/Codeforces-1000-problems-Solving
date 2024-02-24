#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int A, B;
        cin >> A >> B;

        int frontPerson = -1;
        for (int j = 0; j < N; ++j) {
            if (P[j] == A) {
                frontPerson = A;
            } else if (P[j] == B) {
                frontPerson = B;
            }
            if (frontPerson != -1) {
                cout << frontPerson << endl;
                break;
            }
        }
    }

    return 0;
}
