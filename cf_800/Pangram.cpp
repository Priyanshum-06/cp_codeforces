#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> letters;
    for (char c : s) {
        if (isalpha(c)) {
            letters.insert(tolower(c)); // convert to lowercase to handle both cases
        }
    }
    if (letters.size() == 26)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}