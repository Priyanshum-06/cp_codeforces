#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> v(n);
        v[0] = 0;
        long long l = 0, r = 0;
        for (int i = 1; i <= n-1; i++) {
            if (s[i] == '<') {
                v[i+1] = --l;
            }
            else {
                v[i+1] = ++r;
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << v[i] - l + 1 << " ";
        }
        cout << '\n';
    }
    return 0;
}