#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int numbers;
        cin >> numbers;
        set<char> digits;
        string s = to_string(numbers);
        for (char ch : s) {
            digits.insert(ch);
        }
        int y1 = 0;
        while (true) {
            string yes = to_string(y1);
            bool ok = false;
            for (char ch : yes) {
                if (digits.count(ch)) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                cout << y1 << endl;
                break;
            }
            y1++;
        }
    }
    return 0;
}
