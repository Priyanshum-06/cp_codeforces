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
    // recursive function
    if (n == 1) return true;
    if (n <= 0 || n % 4 != 0) return false;
    return isPowerOfFour(n / 4);
    return 0;
}