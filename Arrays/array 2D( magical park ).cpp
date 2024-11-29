#include <iostream>
using namespace std;

int main() {
    int n, m, k, s;
    cin >> n >> m >> k >> s;
    char park[n][m];
    
    // Read the park layout
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> park[i][j];
        }
    }
    
    // Traverse the park
    int energy = s;
    bool possible = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (park[i][j] == '#') {
                // Cannot move further, stuck
                break;
            } else if (park[i][j] == '*') {
                // Reduce energy by 1
                energy--;
            }
            if (j != 0) {
                // Move right, except for the first column
                energy--;
            }
            if (energy < 1) {
                // Cannot move further, insufficient energy
                possible = false;
                break;
            }
        }
        if (!possible) {
            // Cannot move further, insufficient energy
            break;
        }
        // Move down, except for the last row
        if (i != n - 1) {
            energy--;
        }
        if (energy < 1) {
            // Cannot move further, insufficient energy
            possible = false;
            break;
        }
    }
    
    // Check if possible to complete the park
    if (possible && energy >= k) {
        cout << "Yes" << endl;
        cout << energy << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
