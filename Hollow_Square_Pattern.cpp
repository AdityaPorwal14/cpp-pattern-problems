#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input size of the square

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' if we're at the border
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
