#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;               // no of test cases
    while (t--) {
        int n, s;
        cin >> n >> s;                       // n = number of positions, s = starting point
        vector<int> pos(n);
        for (int i = 0; i < n; i++) {
            cin >> pos[i];
        }
        int minX = pos[0];
        int maxX = pos[n - 1];

        // Minimum steps = (maxX - minX) + minimum of (distance to minX, distance to maxX)
        int minSteps = (maxX - minX) + min(abs(s - minX), abs(s - maxX));

        cout << minSteps << endl;
    }
    return 0;
}