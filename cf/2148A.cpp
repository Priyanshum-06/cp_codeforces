/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int x, n;
        cin >> x >> n;
        int pos = 1;
        int sum = 0;
        while (pos <= n) {
            if (pos % 2 != 0) {
                sum += x;
            }
            else {
                sum -= x;
            }
            pos++;
        }
        cout << sum << '\n';
    }
    return 0;
}