#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main() {
    int arr[ROWS][COLS];
    
    // Read values from the user
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter value for row " << i << ", column " << j << ": ";
            cin >> arr[i][j];
        }
    }
    
    // Print the array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
