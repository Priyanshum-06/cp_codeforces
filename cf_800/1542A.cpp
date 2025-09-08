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
        vector<int> a(2*n);
        int cntEven = 0, cntOdd = 0;
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) cntEven++;
            else cntOdd++;
        }
        if (cntOdd == n && cntEven == n) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}