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
    long long int sum = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }   
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n - 1; i++) {
        xor2 ^= a[i];
    }
    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }
    int res = xor1 ^ xor2;
    cout << res << '\n';
    return 0;
}