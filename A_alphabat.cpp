#include <iostream>
using namespace std;

int main() {
    int n = 6; // Height of the pattern

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            // Print * at required positions
            if ((j == n - i) || (j == n + i) || (i == n / 2 && j > n - i && j < n + i)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
