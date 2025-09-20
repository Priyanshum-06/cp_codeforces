#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> L(N+1); // 1..N doors
    for (int i = 1; i <= N; i++) {
        cin >> L[i];
    }
    // Reach from left
    int left_reach = 0;
    for (int i = 1; i <= N; i++) {
        if (L[i] == 1) break;
        left_reach = i;
    }
    // Reach from right
    int right_reach = N;
    for (int i = N; i >= 1; i--) {
        if (L[i] == 1) break;
        right_reach = i - 1;
    }
    // Rooms unreachable are strictly between left_reach and right_reach
    int unreachable = max(0, right_reach - left_reach - 1);
    cout << unreachable << "\n";
    return 0;
}
