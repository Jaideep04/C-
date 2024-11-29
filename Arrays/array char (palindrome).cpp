#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char arr[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char arr[] = "racecar";
    int size = strlen(arr);
    
    if (isPalindrome(arr, size)) {
        cout << "The array is palindrome." << endl;
    } else {
        cout << "The array is not palindrome." << endl;
    }
    return 0;
}
