#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, tt;
    cin >> n >> tt;
    string s;
    cin >> s;
    while (tt--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << '\n';
    return 0;
}