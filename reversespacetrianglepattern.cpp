#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {  
        for(int j=i+1; j<n; j++) {
            cout << " ";
        }

        for(int k=i+1; k>0; k--) {
            cout << k;
        }

        cout << endl;
    }

    return 0;
}