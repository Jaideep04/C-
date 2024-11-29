#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    
    // Initialize indices
    int row_start = 0, row_end = ROWS - 1;
    int col_start = 0, col_end = COLS - 1;
    
    // Print the spiral
    while (row_start <= row_end && col_start <= col_end) {
        // Print the top row
        for (int j = col_start; j <= col_end; j++) {
            cout << arr[row_start][j] << " ";
        }
        row_start++;
        
        // Print the right column
        for (int i = row_start; i <= row_end; i++) {
            cout << arr[i][col_end] << " ";
        }
        col_end--;
        
        // Print the bottom row
        if (row_start <= row_end) {
            for (int j = col_end; j >= col_start; j--) {
                cout << arr[row_end][j] << " ";
            }
            row_end--;
        }
        
        // Print the left column
        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--) {
                cout << arr[i][col_start] << " ";
            }
            col_start++;
        }
    }
    
    return 0;
}
