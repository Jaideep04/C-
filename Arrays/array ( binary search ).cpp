#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        cout << "Target not found in array." << endl;
    } else {
        cout << "Target found at index " << result << " in array." << endl;
    }

    return 0;
}
