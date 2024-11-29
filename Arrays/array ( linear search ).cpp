#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int result = linearSearch(arr, n, target);

    if (result == -1) {
        cout << "Target not found in array." << endl;
    } else {
        cout << "Target found at index " << result << " in array." << endl;
    }

    return 0;
}
