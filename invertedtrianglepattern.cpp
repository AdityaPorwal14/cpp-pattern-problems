#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=i; j>0; j--) {
            cout << " ";
        }

        for(int k=i; k<n; k++) {
            cout << i+1;
        }

        cout << endl;
    }

    return 0;
}