#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        char s;
        cin >> s;
        string word = "codeforces";
        for (int i = 0; i < 10; i++) {
            if (word[i] == s) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }    
    return 0;
}