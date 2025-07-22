// 1st approach: using only maths
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long x = k + (k - 1) / (n - 1);
        cout << x << '\n';
    }
    return 0;
}

// 2nd approach: using B.Search
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long low = 1, high = 2 * k, ans = -1;
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long notDiv = mid - mid / n;
            if (notDiv >= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

