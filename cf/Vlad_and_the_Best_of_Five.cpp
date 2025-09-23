#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() != 5) cout << "-1" << '\n';
        int freq_a = 0, freq_b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') freq_a++;
            else freq_b++; 
        }
        if (freq_a > freq_b) cout << "A" << '\n';
        else cout << "B" << '\n';
    }
    return 0;
}