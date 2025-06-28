#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for(int i = 1; i <= n; i++) {
        // Left wing
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        // Spaces between wings
        int spaces = 2 * (n - i);
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right wing
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // Lower half
    for(int i = n; i >= 1; i--) {
        // Left wing
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        // Spaces between wings
        int spaces = 2 * (n - i);
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right wing
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
