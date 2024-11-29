#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "aaabbbcccdddeee";
    int n = strlen(str);

    int i = 0, j = 0;
    while (j < n) {
        if (str[i] == str[j]) {
            j++;
        } else {
            i++;
            str[i] = str[j];
            j++;
        }
    }

    // add null terminator to end of new string
    str[i+1] = '\0';

    cout << "New string after removing consecutive duplicates: " << str << endl;

    return 0;
}
