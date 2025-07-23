#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<int> passedLevels;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        passedLevels.insert(level);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        passedLevels.insert(level);
    }
    if (passedLevels.size() == n)
        cout << "I become the guy." << '\n';
    else
        cout << "Oh, my keyboard!" << '\n';
    return 0;
}
