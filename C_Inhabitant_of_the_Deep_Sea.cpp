#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n; // number of ships
        long long k; // number of times the Kraken will attack the ships
        cin >> n >> k;

        vector<int> durability(n); // durability of the ships
        for (int i = 0; i < n; ++i) {
            cin >> durability[i];
        }

        int firstShip = 0; // pointer to the first ship
        int lastShip = n - 1; // pointer to the last ship
        int sunkShips = 0; // count of sunk ships

        // While there are ships to attack
        while (k > 0 && firstShip <= lastShip) {
            // If the durability of the first ship is 0, it sinks
            if (durability[firstShip] == 0) {
                ++sunkShips;
                ++firstShip; // Move to the next ship
            }
            // If the durability of the last ship is 0, it sinks
            else if (durability[lastShip] == 0) {
                ++sunkShips;
                --lastShip; // Move to the previous ship
            }
            // If both first and last ships have positive durability
            else {
                // Determine how many times we can attack the ships without sinking any
                // This is either the durability of the first or the last ship, whichever is smaller
                int minDurability = min(durability[firstShip], durability[lastShip]);
                // Calculate how many ships will sink in this round of attacks
                int shipsSunkThisRound = min(minDurability, (int)k);
                // Reduce the durability of attacked ships
                durability[firstShip] -= shipsSunkThisRound;
                durability[lastShip] -= shipsSunkThisRound;
                // Update the total count of sunk ships
                sunkShips += shipsSunkThisRound;
                // Decrease the number of attacks left for the Kraken
                k -= shipsSunkThisRound;
            }
        }

        cout << sunkShips << endl; // Output the count of sunk ships
    }

    return 0;
}
