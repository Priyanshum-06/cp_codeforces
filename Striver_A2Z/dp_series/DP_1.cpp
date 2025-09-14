/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int f(int n, vector<int> &dp) {
    if (n <= 1) return n;

    if (dp[n] != -1) return dp[n];

    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);
    return 0;
}





/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int n;
    cin >> n;
    int prev2 = 0;
    int prev = 1;
    for (int i = 2; i <= n; i++) {
      int curi = prev + prev2;
      prev2 = prev;
      prev = curi;
    }
    cout << prev << '\n';
    return 0;
}