/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int mn = min({x1, x2, x3});
    int mx = max({x1, x2, x3});
    cout << mx - mn << '\n';   
    return 0;
}