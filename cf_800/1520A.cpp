#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; 
    if (!(cin >> tt)) return 0;
    while (tt--) {
        int n; string s;
        cin >> n >> s;
        vector<bool> finished(26, false);
        char last = s[0];
        bool ok = true;
        for (int i = 1; i < n; ++i) {
            if (s[i] != last) {
                finished[last - 'A'] = true;
                if (finished[s[i] - 'A']) {
                    ok = false; 
                    break;
                }
                last = s[i];
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
