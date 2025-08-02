#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        vector<int> s(4);
        for (int i = 0; i < 4; i++) cin >> s[i];

        int semi1 = max(s[0], s[1]);  // Winner of first match
        int semi2 = max(s[2], s[3]);  // Winner of second match

        // Find the two highest skill values
        vector<int> sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());

        int top1 = sorted_s[3];
        int top2 = sorted_s[2];

        // If the two winners are the top two skilled players
        if ((semi1 == top1 || semi1 == top2) && (semi2 == top1 || semi2 == top2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
