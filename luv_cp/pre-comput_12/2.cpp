/** 
  *     author: pmcoder1729
**/

/*  
    Given array a of N integers. Given Q queries
    and in each query given a number X, print 
    count of that number in array
    
    Constraints
    1 <= N <= 10^5
    1 <= a[i] <= 10^7
    1 <= Q <= 10^5
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 1e7+10;
// create hash array globally
int hsh[N];

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int Q;
    cin >> Q;
    while (Q--) {
        int x;
        cin >> x;
        cout << hsh[x] << '\n';
    }
    // O(N) + O(Q * N) = O(N^2) = 10^10 --> old
    // O(N) + O(Q) = O(N) = 2*10^5
    return 0;
}