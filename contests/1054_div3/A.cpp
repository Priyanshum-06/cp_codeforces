/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) neg++;
            if (a[i] == 0) zero++;
        }
        int ans;
        if (neg % 2 == 0) {
            ans = zero;
        }
        else {
            ans = zero + 2;
        }
        cout << ans << '\n';
    }
    return 0;
}