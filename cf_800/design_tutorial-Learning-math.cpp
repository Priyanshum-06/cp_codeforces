#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    // taking all numbers--> 4 is least composite number
    for (int x = 4; x <= n/2; x++) {
        int y = n - x;

        // check if x is composite
        bool x_composite = false;
        if (x > 3) {
            for (int i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    x_composite = true;
                    break;
                }
            }
        }

        // check if y is composite
        bool y_composite = false;
        if (y > 3) {
            for (int i = 2; i * i <= y; i++) {
                if (y % i == 0) {
                    y_composite = true;
                    break;
                }
            }
        }
        if (x_composite && y_composite) {
            cout << x << " " << y << '\n';
            return 0;
        }
    }
}