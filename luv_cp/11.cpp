/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

// concept of modular arithmetic
const int M = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int n;
    cin >> n;
    long long int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = (fact * i) % M;
    }
    cout << fact << '\n';
    return 0;
}