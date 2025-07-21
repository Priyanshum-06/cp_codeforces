#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s); 
    set<char> letters;
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            letters.insert(ch);
        }
    }
    cout << letters.size() << endl;
    return 0;
}
