#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int total_calories = 0;
    for (char c : s) {
        int index = c - '1';  
        total_calories += a[index];
    }
    cout << total_calories << endl;
    return 0;
}
