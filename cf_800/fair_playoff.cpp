#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int f_men = 0;
        int s_men = 0;
        int s[4];
        int slargest = -1;
        int largest = s[0];
        for (int i = 0; i < 4; i++) {
            cin >> s[i];
        }
        for (int i = 0; i < 4; i++) {
            f_men = max(s[0], s[1]);
            s_men = max(s[2], s[3]);
            if (slargest < s[i] && s[i] != largest) {
                slargest = s[i];                
            }
            if (f_men == slargest || s_men == slargest) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}