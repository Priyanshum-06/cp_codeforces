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
        int k, x;
        cin >> k >> x;
        while (k--) {
            x *= 2;     
        }
        cout << x << '\n';
    }
    return 0;
}