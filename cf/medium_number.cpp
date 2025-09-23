#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = max({a, b, c});
        int mini = min({a, b, c});
        if (a != maxi && a != mini) cout << a << '\n';
        else if (b != maxi && b != mini) cout << b << '\n';
        else cout << c << '\n'; 
    }
    return 0;
}