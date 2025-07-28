#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        long long k = x * ((n-y)/x) + y;
        cout << k << '\n';
    }
    return 0;
}