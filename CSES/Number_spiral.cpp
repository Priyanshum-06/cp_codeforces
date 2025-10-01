/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int row, col;
        cin >> row >> col;
        int layer = max(row, col);
        if (layer % 2 == 1) {
            swap(row, col);
        }
        if (col == layer) {
            // vertical part
            cout << (long long) (layer - 1) * (layer - 1) + 1 + row - 1 << '\n';
        }
        else {
            assert(row == layer);
            cout << (long long) layer * layer - (col - 1) << '\n';
        }
    }
    return 0;
}