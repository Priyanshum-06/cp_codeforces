#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> parts;
        int power = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                parts.push_back(digit * power);
            }
            n /= 10;
            power *= 10;
        }
        cout << parts.size() << '\n';
        for (int x : parts) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}
