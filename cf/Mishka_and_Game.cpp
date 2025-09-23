#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m_wins = 0, c_wins = 0;
    for (int i = 0; i < n; ++i) {
        int mi, ci;
        cin >> mi >> ci;
        if (mi > ci) m_wins++;
        else if (ci > mi) c_wins++;
        // else: draw, no points
    }
    if (m_wins > c_wins) {
        cout << "Mishka" << endl;
    } else if (c_wins > m_wins) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
