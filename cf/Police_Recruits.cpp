#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> events(n);
    for (int i = 0; i < n; i++) {
        cin >> events[i];
    }

    int officers = 0, untreated_crimes = 0;

    for (int i = 0; i < n; i++) {
        if (events[i] == -1) {
            if (officers > 0) {
                officers--;
            } else {
                untreated_crimes++;
            }
        } else {
            officers += events[i]; // recruiting officers
        }
    }

    cout << untreated_crimes << '\n';

    return 0;
}
