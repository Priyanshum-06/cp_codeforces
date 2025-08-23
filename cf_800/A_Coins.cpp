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
      long long int n, k;
      cin >> n >> k;
      if (k % 2 == 1) {
        cout << "YES" << '\n';
      }
      else {
        cout << (n % 2 == 0 ? "YES\n" : "NO\n");
      }
    }
    return 0;
}