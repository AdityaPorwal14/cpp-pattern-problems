#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            cout <<" ";
        }

        char ch = 'A' + (i + 1) - 1;
        for (int k = i+1; k>0; k--) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}
