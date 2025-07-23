#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int h, m;
        cin >> h >> m;
        int minutes_passed = h * 60 + m;
        int minutes_left = 1440 - minutes_passed;
        cout << minutes_left << endl;
    }
    return 0;
}
