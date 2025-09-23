#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> digits;

    // Extract digits
    for (int i = 0; i < s.length(); i += 2)
        digits.push_back(s[i]);

    sort(digits.begin(), digits.end());

    // Print sorted digits with '+'
    for (int i = 0; i < digits.size(); ++i) {
        if (i > 0) cout << "+";
        cout << digits[i];
    }

    return 0;
}
