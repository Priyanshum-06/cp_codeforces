#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost = k * w * (w + 1) / 2;

    int borrow = max(0, total_cost - n);

    cout << borrow << '\n';
    return 0;
}
