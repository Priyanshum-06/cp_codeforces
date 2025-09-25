/** 
  *     author: pmcoder1729
**/

/** 
    Given T cases and in each test case 
    a number N. Print it's factorial for each
    test case % M
    where M = 10^9 + 7.
    
    Constraints
    1 <= T <= 10^5
    1 <= N <= 10^5
 */
#include <bits/stdc++.h>

using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
// storing the values of factorial in fact[N]
long long int fact[N];

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= N; i++) {
        fact[i] = fact[i-1] * i;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fact << '\n';
    }
    // O(T * M) = 10^10 --> Old T.C
    // O(T + M) = 10^5 + 10^5 
    return 0;
}