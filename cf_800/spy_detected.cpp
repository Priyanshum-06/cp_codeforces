#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Find the common value (either a[0] or a[1])
        int common = (a[0] == a[1]) ? a[0] : a[2] == a[0] ? a[0] : a[1];

        // Find and print the index of the unique element (1-based)
        for (int i = 0; i < n; i++) {
            if (a[i] != common) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }
    return 0;
}


// using vector iterator
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        // Identify the common element
        int common;
        if (a[0] == a[1]) common = a[0];
        else if (a[0] == a[2]) common = a[0];
        else common = a[1];

        // Find the iterator to the unique element
        auto it = find_if(a.begin(), a.end(), [common](int x) {
            return x != common;
        });

        // Print the 1-based index
        cout << distance(a.begin(), it) + 1 << '\n';
    }
    return 0;
}
