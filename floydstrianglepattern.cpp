#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 1;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j>0; j--) {
            cout << sum;
            sum++;
        }

        cout << endl;
    }
}